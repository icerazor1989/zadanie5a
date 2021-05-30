#include <iostream>
using namespace std;


    void Replace(int* a)
    {
        for (int i = 0; i < 10; ++i)
        {
            a[i] = !a[i];
        }
    }


void Print(int* a)
{
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
     
    int a[10] = { 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 };

    Print(a );
    Replace(a);
    Print(a);
        
    return 0;
}
