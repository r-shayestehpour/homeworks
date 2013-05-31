//Reza Shayestehpour    91522185
//g++ 4.6

#include <iostream>
#include <string>

using namespace std;

bool RecursiveIsPalindrome(string);

int main()
{
    string str;

    cin >> str;
    if (RecursiveIsPalindrome(str))
        cout << "It's a palindrome word." << endl;
    else 
        cout << "It's not a palindrome word." << endl;

    return 0;
}

bool RecursiveIsPalindrome(string str)
{
    if (str.size() < 2)
        return true;
    string trimmed_str;
    for (int i = 1; i < str.size() - 2; i++)
        trimmed_str += str[i];

    if ((str[0] == str[str.size() - 1]) and RecursiveIsPalindrome(trimmed_str))
        return true;
    return false;
}
