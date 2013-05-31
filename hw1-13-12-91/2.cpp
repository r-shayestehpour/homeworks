//Reza Shayestehpour    91522185
//Compiler: g++-4.6

#include <iostream>

using namespace std;

unsigned long long int factorial(int);

int main()
{
    int n;
    
    cout << "enter n: ";
    cin >> n;
    cout << factorial(n) << endl;

    return 0;
}

unsigned long long int factorial(int n)
{
    unsigned long long int result = 1;
    
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }

    return result;

}
