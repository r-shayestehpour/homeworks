//Reza Shayestehpour    91522185
//g++ 4.6

#include <iostream>

using namespace std;

int main ()
{
    char c;
    cout << "enter c: " ;
    cin >> c;

    if (c >= 'a' and c <= 'z')
    {
        cout << (char) (c - 'a' + 'A') << endl;
        return 0;
    }
    if (c >= 'A' and c <= 'Z')
    {
        cout << (char) (c - 'A' + 'a') << endl;
        return 0;
    }    
    cout << "character 'c' you've entered is not an alphabet letter" << endl;
    
    return 0;
}
