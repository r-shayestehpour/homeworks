//Reza Shayestrhpour    91522185
//g++ 4.6

#include <iostream>

using namespace std;

void UpdateArray(int *array, int index);

int main()
{
    int array[10], key_value, index = 11;

    cout << "enter key_value: ";
    cin >> key_value;
    cout << "enter array: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> array[i];
        if (array[i] == key_value)
            index = i;
    }
    if (index == 11)
    {
        cout << "key_value was not found." << endl;
        return 0;
    }
    UpdateArray(array, index);
    for (int i = 0; i < 10; i++)    
        cout << array[i] << '\t';
    
    return 0;
}

void UpdateArray(int *array, int index)
{
    cout << sizeof(array);
    for (int i = index; i < 9; i++)
        *(array + i)= *(array + i + 1);
    array[9] = 0;
}
