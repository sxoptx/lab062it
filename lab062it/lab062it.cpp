#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];
    cout << endl;
}

void MaxMin(int* a, const int size, int& max, int& min)
{
    max = a[0];
    min = a[0];
    for (int i = 1; i < size; i++)
    {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
}

int main()
{
    srand((unsigned)time(NULL));
    const int n = 10;
    int a[n];
    int Low = -10;
    int High = 10;

    Create(a, n, Low, High);
    Print(a, n);

    int max, min;
    MaxMin(a, n, max, min);

    cout << "max = " << max << endl;
    cout << "min = " << min << endl;
    return 0;
}