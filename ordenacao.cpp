#include <iostream>
using namespace std;

void imprimevetor(int *v)
{
    for (int *p = v; p < v + 10; p++)
        cout << " " << *p;
    cout << endl
         << endl;
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
void pointerinsertionsort(int *v)
{
    int aux, *j;
    for (int *p = v + 1; p < v + 10; p++)
    {
        aux = *p;
        j = p-1;
        while (j >= v && *j > aux)
        {
            *(j + 1) = *j;
            j--;
        }
        *(j + 1) = aux;
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
    int vb3[10] = {6, 8, 3, 9, 5, 4, 7, 2, 1, 0};
    cout << "Bubble Sort, vetor ordenado: " << endl;
    imprimevetor(vb0);
    bubblesort(vb0);
    imprimevetor(vb0);
    cout << "Pointer Bubble Sort, vetor ordenado: " << endl;
    imprimevetor(vb0);
    pointerbubblesort(vb0);
    imprimevetor(vb0);
    cout << "Bubble Sort, vetor ordenado: " << endl;
    imprimevetor(vb1);
    bubblesort(vb1);
    imprimevetor(vb1);
    cout << "Pointer Bubble Sort, vetor ordenado: " << endl;
    imprimevetor(vb1);
    pointerbubblesort(vb1);
    imprimevetor(vb1);
    cout << "Bubble Sort, vetor ordenado: " << endl;
    imprimevetor(vb2);
    bubblesort(vb2);
    imprimevetor(vb2);
    cout << "Pointer Bubble Sort, vetor ordenado: " << endl;
    imprimevetor(vb2);
    pointerbubblesort(vb2);
    imprimevetor(vb2);
     cout << "Insertion Sort, vetor ordenado: " << endl;
    imprimevetor(vb3);
    //insertionsort(vb3);
    imprimevetor(vb3);
    cout << "Pointer Insertion Sort, vetor ordenado: " << endl;
    imprimevetor(vb3);
    pointerinsertionsort(vb3);
    imprimevetor(vb3);
    // FALTA IMPLEMENTAR OS OUTROS MÉTODOS DE ORDENAÇÃO
}
