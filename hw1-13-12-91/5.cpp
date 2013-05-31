//Reza Shayestehpour    91522185
//g++ 4.6

#include <iostream>

using namespace std;

unsigned long long int IntegerPower(int, int);

int main()
{
    int base, exponent;
    cout << "enter base, exponenet: ";
    cin >> base >> exponent;
    
    cout << IntegerPower(base, exponent) << endl;

    return 0;
}
unsigned long long int IntegerPower(int base, int exponent)
{
    int result = 1;

    for (int i = 0; i < exponent; i++)
        result *= base;    

    return result;
}
