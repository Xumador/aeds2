#include <iostream>
#include "ordenacao.h"
using namespace std;

int main()
{
    int a[] = {0, 1, 3, 7};       // i
    int b[] = {2, 4, 5, 6, 8, 9}; // j
    int c[10];
    int *p = c;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (a[i] < b[j])
            {
                c[i] = a[i];
            }
            else
            {
                if (a[i] == '\0')
                {
                    c[j] = b[j];
                }
            }
        }
    }
    // bubblesort(p);
    for (int i = 0; i < 10; i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;
}