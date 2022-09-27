#include <iostream>
using namespace std;

void imprimevetor(int *v)
{
    for (int *p = v; p < v + 10; p++)
        cout << " " << *p;
    cout << endl;
}
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
int main(int argc, char **argv)
{
    cout << endl
         << "Métodos de Ordenação" << endl
         << endl;
    int vb0[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int vb1[10] = {5, 8, 2, 0, 6, 9, 1, 4, 3, 7};
    int vb2[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    cout << "Bubble Sort, vetor ordenado: " << endl;
    imprimevetor(vb1);
    bubblesort(vb1);
    imprimevetor(vb1);
    cout << "Pointer Bubble Sort, vetor ordenado: " << endl;
    imprimevetor(vb2);
    pointerbubblesort(vb2);
    imprimevetor(vb2);
}
