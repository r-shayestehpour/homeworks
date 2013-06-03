//#include <statistics.h
#include <cmath>

double Average(int a)
{
    return double(a);
}

double Average(int a, int b)
{
    return double(a + b) / 2;
}

double Average(int a, int b, int c)
{
    return double(a + b + c) / 3;
}

double Average(int a, int b, int c, int d)
{
    return double(a + b + c + d) / 4;
}

double StandardDeviation(int a)
{
    double r = Average(a);

    return sqrt((a - r) * (a - r));
}

double StandardDeviation(int a, int b)
{
    double r = Average(a, b);

    return sqrt((a - r)*(a - r) + (b - r)*(b - r));
}

double StandardDeviation(int a, int b, int c)
{
    double r = Average(a, b, c);

    return sqrt((a - r)*(a - r) + (b - r)*(b - r) + (c - r)*(c - r));
}

double StandardDeviation(int a, int b, int c, int d)
{
    double r = Average(a, b, c, d);

    return sqrt((a - r)*(a - r) + (b - r)*(b - r) + (c - r)*(c - r) + (d - r)
            *(d - r));
}
