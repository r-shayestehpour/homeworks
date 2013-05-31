//Reza Shayestehpour    91522185
//g++ 4.6

#include <iostream>

using namespace std;

int main()
{
    int array [10], sum = 0, num = 0;
    double average;

    for (int i = 0; i < 10; i++)
        cin >> array[i];

    for (int i = 0; i < 10; i++)
        sum += array[i];
    average = sum / 10;

    for (int i = 0; i < 10; i++)
        if (array [i] > average)
            num ++;

    cout << "Average is = " << average << ", and the number of integers great";
    cout << "er than average is = " << num << endl;    

    return 0;
}
