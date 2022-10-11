#include <iostream>
using namespace std;

int main()
{
    int m1[3][4]{
        {0, 1, 2, 3},
        {0, 1, 2, 3},
        {0, 1, 2, 3}};

    int m2[3][4]{
        {0, 1, 2, 3},
        {0, 1, 2, 3},
        {0, 1, 2, 3}};

    int m3[3][4];

    int *p = &m1[0][0], *q = &m2[0][0], *r = &m3[0][0];

    for (; q < &m2[0][0] + 12; p++, q++, r++)
        *r = *p + *q;  
    
    for (int *a = &m3[0][0]; a < &m3[0][0] + 12; a++)
    {
        cout << *a << " ";
        if (*a / 3 == 2)
        {
            cout << endl;
        }
    }
    return 0;
}
