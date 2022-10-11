#include <iostream>
using namespace std;

int main()
{
    int m1[3][4]{
        {1, 1, 1, 1},
        {2, 2, 2, 2},
        {3, 3, 3, 3}};

    int m2[4][5]{
        {1, 1, 1, 1, 1},
        {2, 2, 2, 2, 2},
        {3, 3, 3, 3, 3},
        {4, 4, 4, 4, 4}};

    int m3[3][5];

    int *p1, *q1, *r, *p2, *q2;
    r = &m3[0][0];
    p1 = &m1[0][0]; // marca inicio das linhas
    q1 = &m2[0][0]; // marca inicio das colunas

    for (; p1 < &m1[0][0] + 12; p1 += 4)
        for (; q1 < &m2[0][0] + 5; q1++)
        {
            *r = 0;
            for (p2 = p1, q2 = q1; p2 < &m1[0][0] + 12 || q2 < &m2[0][0] + 20; p2++, q2 += 6)
            {
                *r = *r + (*p2)*(*q2);
            }
            r++;
        }
    for (int *a = &m3[0][0]; a < &m3[0][0] + 15; a++)
    {
        cout << *a << " ";
    }
    return 0;
}
