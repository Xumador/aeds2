#include <iostream>
using namespace std;

void troca(int a, int b)
{
    int aux;
    aux = a;
    a = b;
    b = aux;
}
void troca2(int *a, int *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}
int main()
{
    int x = 11, y = 22;
    //cout << troca(x, y) << endl;
    troca2(&x, &y);
    cout << x << endl
         << y << endl;
    return 0;
}