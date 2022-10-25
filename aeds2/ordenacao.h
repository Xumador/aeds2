#ifndef ORDENACAO_H
#define ORDENACAO_H
#include <iostream>
using namespace std;
void bubblesort(int *v)
{
    int aux;
    for (int i = 9; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (v[j] > v[j + 1])
            {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}
void insertionsort(int *v)

{
    int aux, j;
    for (int i = 1; i < 10; i++)
    {
        aux = v[i];
        j = i - 1;
        while (j >= 0 && v[j] > aux)
        {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = aux;
    }
}
void selectionsort(int *v)
{
    int aux, j, min;
    for (int i = 0; i < 10; i++)
    {
        min = i;
        aux = v[i];
        for (int j = i + 1; j < 10; j++)
            if (v[j] < aux)
            {
                aux = v[j];
                min = j;
            }
        v[min] = v[i];
        v[i] = aux;
    }
}
void pointerselectionsort(int *v)
{
    int aux, *q, *min;
    for (int *p = v; p < v + 10; p++)
    {
        min = p;
        aux = *p;
        for (q = p + 1; q < v + 10; q++)
            if (*q < aux)
            {
                aux = *q;
                min = q;
            }
        *min = *p;
        *p = aux;
    }
}
void pointerinsertionsort(int *v)
{
    int aux, *q;
    for (int *p = v + 1; p < v + 10; p++)
    {
        aux = *p;
        q = p - 1;
        while (q >= v && *q > aux)
        {
            *(q + 1) = *q;
            q--;
        }
        *(q + 1) = aux;
    }
}
void pointerbubblesort(int *v)
{
    int aux;
    for (int *p = v + 9; p > v; p--)
    {
        for (int *q = v; q < p; q++)
        {
            if (*q > *(q + 1))
            {
                aux = *q;
                *q = *(q + 1);
                *(q + 1) = aux;
            }
        }
    }
}
#endif