//Reza Shayestehpour    91522185
//g++ 4.6

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int center_x, center_y, radious, dot_x, dot_y;

    cout << "enter center_x, center_y, radious, dot_x, dot_y: ";
    cin >> center_x >> center_y >> radious >> dot_x >> dot_y;

    if (sqrt((center_x - dot_x)*(center_x - dot_x) + (center_y - dot_y)*(center_y - dot_y)) == radious)
        cout << "on circumference";
    else
        cout << "not on circumference";

    return 0;
}
