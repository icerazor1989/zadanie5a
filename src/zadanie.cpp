#include <iostream>
using namespace std;

void Replace(int* a, int n)

{

    int  r;

    for (int j = 0; j < abs(n); j++)
    {
        if (n > 0)
        {
            r = a[0];
            for (int i = 0; i < 9; i++)
                      
                a[i] = a[i + 1];
                a[9] = r;            
        }
        else
        {
            r = a[9];
            for (int i = 9; i > 0; i--)
            
                a[i] = a[i - 1];
                a[0] = r;            
        }
    }
}

void Print(int* a)
{
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int n;
    cout << "yacheek sdviga" << endl;
    cin >> n;

    int a[10] = { 7, 9, 10, 11, 16, 8, 1, 6, 3, 7 };

    Print(a);
    Replace(a, n);
    Print(a);

    return 0;
}