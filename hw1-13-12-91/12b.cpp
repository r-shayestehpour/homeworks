//Reza Shayestehpour    91522185
//g++ 4.6

#include <iostream>

using namespace std;

void InsertionSort(int *, int);

int main()
{
    int *array, n;

    cout << "enter size of array: ";
    cin >> n;
    array = new int [n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter #" << i << ": ";
        cin >> array[i];
    }
    
    InsertionSort(array, n);

    for (int i = 0; i < n; i++)
        cout << array[i] << '\t';
    cout << endl;

    return 0;
}

void InsertionSort(int *array, int size)
{
    for (int i = 1; i < size; i++)
        for (int j = i; j > 0; j--)
        {
            if (*(array + j) > *(array + j - 1))
                break;
            *(array + j) += *(array + j - 1);
            *(array + j - 1) = *(array + j) - *(array + j - 1);
            *(array + j) -= *(array + j - 1);
        }
            
}
