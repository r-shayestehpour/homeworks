//Reza Shayestehpour    91522185
//g++ 4.6

#include <iostream>
#include <string>

using namespace std;

void NonRecursiveIsPalindrome(string);

int main()
{
    string str;

    cout << "enter your string: ";
    cin >> str;

    NonRecursiveIsPalindrome(str);

    return 0;
}

void NonRecursiveIsPalindrome(string str)
{
    bool is_palindrome = true;

    cout << str.size() << endl;
    
    for (int i = 0; i < str.size() / 2; i++)
        if (str[i] != str[str.size() - i - 1])
            is_palindrome = false;

    if (is_palindrome)
        cout << "It's a palindrome word." << endl;
    else
        cout << "It's not a palindrome word." << endl;    
}
