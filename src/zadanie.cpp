#include  <iostream>
using namespace std;

bool CheckBalance(int* a) 
{
    for (int i = 0; i < 6; i++)
    {
        int left = 0;
        int right = 0;
        int m1;

        for (m1 = 0; m1 < i; m1++)
        {
            left += a[m1];
        }

        for (int m2 = m1; m2 < 6; m2++)
        {
            right += a[m2];
        }

        if (left == right)
        {
            cout << "true" << endl;
            return true;
        }

    }
            cout << "false" << endl;
            return false;  
    }

int main()
{
    int a[6];

    cout << "Enter number of massiv :" << endl;
    for (int i = 0; i < 6; i++) 
    {
        cout << "[" << i + 1 << "]" << ": ";
        cin >> a[i];
    }

    CheckBalance(a);
}