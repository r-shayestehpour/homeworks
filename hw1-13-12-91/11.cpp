//Reza Shayestehpour    91522185
//g++ 4.6

#include <iostream>
#include <string>

using namespace std;

bool IsEqual(string, int, string, int);

int main()
{
    string str1, str2;

    cout << "enter first array: ";
    cin >> str1;
    cout << "enter second array: ";
    cin >> str2;

    IsEqual(str1, str1.size(), str2, str2.size()) ? cout << "array 1 = array 2" << endl : cout << "array 1 != array 2" << endl;    

    return 0;
}

bool IsEqual(string str1, int size1, string str2, int size2)
{
    if (size1 != size2)
        return false;    
    for (int i = 0; i < size1; i++)    
        if (str1[i] != str2[i])
            return false;     
    return true;
}
