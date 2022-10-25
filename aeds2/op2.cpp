#include <iostream>
using namespace std;

int x = 11, y = 22, z = 33;
int *p; //(aponta para um local do tipo int)

int v[] = {50, 51, 52, 53, 54, 55, 56, 57, 58, 59};

int main()
{
    cout << "Aritmética de ponteiros" << endl
         << endl;
    cout << "Variaveis" << endl;
    cout << "x: " << x << endl
         << "y: " << y << endl
         << "z: " << z << endl;
    cout << "&x: " << &x << endl
         << "&y: " << &y << endl
         << "&z: " << &z << endl;
    p = &x;
    cout << p << endl;
    cout << "*p: " << *p << endl;
    p++; // incrementa o endereço até o próximo que tiver um int
    cout << p << endl;
    cout << "*p: " << *p << endl;
    p++;
    cout << p << endl;
    cout << "*p: " << *p << endl;
    cout << endl
         << "Vetores" << endl;
    cout << "&v: " << &v << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "i: " << i << "  *(v+i) " << *(v + i) << "  &v[i]: " << &v[i] << endl;
    }
    cout << endl
         << "Ponteiro com Vetores" << endl;
    for (int t = *v; t < *v + 10; t++)
    {
        cout << " *t: " << t << " t: " << t << endl;
    }
}