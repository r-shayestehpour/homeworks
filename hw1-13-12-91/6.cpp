#include <iostream>
#include "statistics.h"
#include "statistics.cpp"

using namespace std;

int main()
{
    int n = 0;

    cout << "Do you wish to test 1, 2, 3 or 4 numbers (enter 0 to end the p\
rogram):";
    cin >> n;
    int *num = new int [n];
    for (int i = 0; i < n; i++)
        cin >> num[i];

    switch (n)
    {
    case 1:        
        cout << "Average: " << Average(num[0]) << "Standard deviation: " << 
            StandardDeviation(num[0]) << endl;
        break;
    case 2:        
        cout << "Average: " << Average(num[0], num[1]) << "Standard deviatio\
n: " << StandardDeviation(num[0], num[1]) << endl;
        break;
    case 3:        
        cout << "Average: " << Average(num[0], num[1], num[2]) << "Standard \
eviation: " << StandardDeviation(num[0], num[1], num[2]) << endl;
        break;
    case 4:        
        cout << "Average: " << Average(num[0], num [1], num[2], num[3]) << "\
Standard deviation: " << StandardDeviation(num[0], num[1], num[2], num[3]) << 
endl;
        break;
    }

    return 0;
}
