//Reza Shayestehpour    91522185
//g++ 4.6

#include <iostream>
//#include <string>

using namespace std;

int main ()
{
    int n, **matrix;
    bool symmetric = true;

    cout << "enter size of matrix: ";
    cin >> n;
    matrix = new int* [n];
    for (int i = 0; i < n; i++)
        matrix[i] = new int [n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j ++)
        {
            cout << "enter matrix[" << i << "][" << j << "] : ";
            cin >> matrix[i][j];
        }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if(matrix[i][j] != matrix[j][i])            
                symmetric = false;
    
    symmetric ? cout << "matrix is symmetric"<< endl : cout << "matrix is not symmetric" << endl;

    return 0;
}
