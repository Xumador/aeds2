#include <iostream>
#include "ordenacao.h"
using namespace std;

void imprimevetor(int *v)
{
    for (int *p = v; p < v + 10; p++)
        cout << " " << *p;
    cout << endl
         << endl;
}

int main()
{
    cout << endl
         << "Métodos de Ordenação" << endl
         << endl;
    int vb0[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int vb1[10] = {5, 8, 2, 0, 6, 9, 1, 4, 3, 7};
    int vb2[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    cout << "Bubble Sort, vetor ordenado: " << endl;
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
    imprimevetor(vb2);
    cout << "Selection Sort, vetor desordenado: " << endl;
    imprimevetor(vb1);
    selectionsort(vb1);
    imprimevetor(vb1);
    cout << "Pointer Selection Sort, vetor desordenado: " << endl;
    imprimevetor(vb1);
    pointerselectionsort(vb1);
    imprimevetor(vb1);
}