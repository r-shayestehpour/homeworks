//Reza Shayestehpour    91522185
//g++ 4.6

#include <iostream>

using namespace std;

void PrintPyramid(int);

int main()
{
    int n;

    cout << "how high would you like the pyramid?";
    cin >> n;
    while (true)
    {
        if (n < 31 and n > 0)
            break;
        cout << "Pick another height (must be between 1 and 30): " ;
        cin >> n;
    }

    PrintPyramid(n);

    return 0;
}

void PrintPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
            cout << " ";
        for (int j = 0; j < (i + 1) * 2; j++)
            cout << "*";
        cout << endl;
    }
}
