import sqlite3
conn = sqlite3.connect('films.db')
c = conn.cursor()

def CREATE_TABLES():
    c.executescript('''/* Delete the tables if they already exist */
        drop table if exists Movie;
        drop table if exists Reviewer;
        drop table if exists Rating;

        /* Create the schema for our tables */
        create table Movie(mID int, title text, year int, director text);
        create table Reviewer(rID int, name text);
        create table Rating(rID int, mID int, stars int, ratingDate date);

        /* Populate the tables with our data */
        insert into Movie values(101, 'Gone with the Wind', 1939, 'Victor Fleming');
        insert into Movie values(102, 'Star Wars', 1977, 'George Lucas');
        insert into Movie values(103, 'The Sound of Music', 1965, 'Robert Wise');
        insert into Movie values(104, 'E.T.', 1982, 'Steven Spielberg');
        insert into Movie values(105, 'Titanic', 1997, 'James Cameron');
        insert into Movie values(106, 'Snow White', 1937, null);
        insert into Movie values(107, 'Avatar', 2009, 'James Cameron');
        insert into Movie values(108, 'Raiders of the Lost Ark', 1981, 'Steven Spielberg');

        insert into Reviewer values(201, 'Sarah Martinez');
        insert into Reviewer values(202, 'Daniel Lewis');
        insert into Reviewer values(203, 'Brittany Harris');
        insert into Reviewer values(204, 'Mike Anderson');
        insert into Reviewer values(205, 'Chris Jackson');
        insert into Reviewer values(206, 'Elizabeth Thomas');
        insert into Reviewer values(207, 'James Cameron');
        insert into Reviewer values(208, 'Ashley White');

        insert into Rating values(201, 101, 2, '2011-01-22');
        insert into Rating values(201, 101, 4, '2011-01-27');
        insert into Rating values(202, 106, 4, null);
        insert into Rating values(203, 103, 2, '2011-01-20');
        insert into Rating values(203, 108, 4, '2011-01-12');
        insert into Rating values(203, 108, 2, '2011-01-30');
        insert into Rating values(204, 101, 3, '2011-01-09');
        insert into Rating values(205, 103, 3, '2011-01-27');
        insert into Rating values(205, 104, 2, '2011-01-22');
        insert into Rating values(205, 108, 4, null);
        insert into Rating values(206, 107, 3, '2011-01-15');
        insert into Rating values(206, 106, 5, '2011-01-19');
        insert into Rating values(207, 107, 5, '2011-01-20');
        insert into Rating values(208, 104, 3, '2011-01-02');''')
    conn.commit()


CREATE_TABLES()

print ("1:")
for i in c.execute("SELECT title FROM Movie WHERE director='Steven Spielberg'"):
    print (i)

print ("2:")
for i in c.execute("SELECT Reviewer.name FROM Reviewer, Rating, Movie WHERE Rating.rID = Reviewer.rID AND Rating.mID = Movie.mID AND Movie.title='Gone with the Wind'"):
    print (i)

print ("3:")
s = 0
for i in c.execute("SELECT Rating.stars FROM Rating, Movie WHERE Rating.mID = Movie.mID AND Movie.title='Gone with the Wind'"):
    s += i[0]
print (s)

print ("4:")
for i in c.execute("SELECT Rating.ratingDate FROM Rating WHERE Rating.stars > 3 ORDER BY Rating.ratingDate"):
    print (i)

print ("5:")
c.execute("UPDATE Movie SET director='Shangul' WHERE Movie.title='Avatar'")

print ("6:")
c.execute("DELETE FROM Movie WHERE Movie.director='James Cameron'")

print ("7:")
temp = ""
ts = 0
ns = 0
for i in c.execute("SELECT Movie.title, Rating.stars FROM Movie, Rating WHERE Rating.mID = Movie.mID"):
    if (temp != "" and temp != i[0]):
        print (temp, ": Average Score:", float(ts)/ns)
        ts = i[1]
        ns = 1
        temp = i[0]
    elif (temp == ""):
        temp = i[0]
        ts = i[1]
        ns = 1
    else:
        ts += i[1]
        ns += 1
print (temp, ": Average Score:", float(ts)/ns) 

