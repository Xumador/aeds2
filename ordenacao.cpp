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
int main(int argc, char **argv)
{
    cout << endl
         << "Métodos de Ordenação" << endl
         << endl;
    int vb0[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int vb1[10] = {5, 8, 2, 0, 6, 9, 1, 4, 3, 7};
    int vb2[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    /*cout << "Bubble Sort, vetor ordenado: " << endl;
    imprimevetor(vb0);
    bubblesort(vb0);
    imprimevetor(vb0);
    cout << "Pointer Bubble Sort, vetor ordenado: " << endl;
    imprimevetor(vb0);
    pointerbubblesort(vb0);
    imprimevetor(vb0);
    cout << "Bubble Sort, vetor desordenado: " << endl;
    imprimevetor(vb1);
    bubblesort(vb1);
    imprimevetor(vb1);
    cout << "Pointer Bubble Sort, vetor ordenado: " << endl;
    imprimevetor(vb1);
    pointerbubblesort(vb1);
    imprimevetor(vb1);
    cout << "Insertion Sort, vetor ordenado: " << endl;
    imprimevetor(vb0);
    insertionsort(vb0);
    imprimevetor(vb0);
    cout << "Pointer Insertion Sort, vetor ordenado: " << endl;
    imprimevetor(vb0);
    pointerinsertionsort(vb0);
    imprimevetor(vb0);
    cout << "Insertion Sort, vetor desordenado: " << endl;
    imprimevetor(vb2);
    insertionsort(vb2);
    imprimevetor(vb2);
    cout << "Pointer Insertion Sort, vetor desordenado: " << endl;
    imprimevetor(vb2);
    pointerinsertionsort(vb2);
    imprimevetor(vb2);*/
    cout << "Selection Sort, vetor desordenado: " << endl;
    imprimevetor(vb1);
    selectionsort(vb1);
    imprimevetor(vb1);
    cout << "Pointer Selection Sort, vetor desordenado: " << endl;
    imprimevetor(vb1);
    pointerselectionsort(vb1);
    imprimevetor(vb1);
    // FALTA IMPLEMENTAR OS OUTROS MÉTODOS DE ORDENAÇÃO
}
