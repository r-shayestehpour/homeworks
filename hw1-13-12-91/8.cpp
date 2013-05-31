//Reza Shayestehpour    91522185
//g++ 4.6

#include <iostream>

using namespace std;

int main()
{
    int num0, num1;
    bool ascending = false, descending = false;

    cout << "enter #1: ";
    cin >> num0;
    for (int i = 0; i < 9; i++)
    {        
        cout << "enter #" << i+2 << ": ";
        cin >> num1;
        if (num0 > num1)
            descending = true;
        if (num0 < num1)
            ascending = true;
        num0 = num1;
    }

    if (ascending and descending)
    {
        cout << "the array is both ascending and descending." << endl;
        return 0;
    }
    if (ascending)
    {
        cout << "the array is ascending." << endl;
        return 0;
    }
    if (descending)
    {
        cout << "the array is descending." << endl;
        return 0;
    }
    cout << "the array is constant." << endl;

    return 0;
}
