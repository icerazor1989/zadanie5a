#include <iostream>

using namespace std;

void Print(int* a, const int n)
{
    int j = 1;

    for (int i = 0; i < n; i++,  j = j + 3)
    {
        a[i] = j;
        cout << a[i] << " ";
    }
}

int main()
{
    const int n = 8;
    int a[n] = {};

    Print(a, n);

    return 0;
}