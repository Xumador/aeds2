#include <iostream>
using namespace std;

int x = 11, y = 22, z = 33;
int *p; //(aponta para um local do tipo int)

int main()
{
    cout << "x: " << x << " y: " << y << " z: " << z << endl;       // valores
    cout << "&x: " << &x << " &y: " << &y << " &z: " << &z << endl; // endereços
    p = &x;
    cout << p << endl;            // endereço, sem asterisco
    cout << "*p: " << *p << endl; // conteudo da memória apontada
    p = &y;
    cout << p << endl;
    cout << "*p: " << *p << endl;
    p = &z;
    cout << p << endl;
    cout << "*p: " << *p << endl;
}