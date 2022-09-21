#include <iostream>
using namespace std;

double x = 11, y = 22, z = 33;
double *p; //(aponta para um local do tipo int)

int main()
{
    cout << "x: " << x << " y: " << y << " z: " << z << endl;
    cout << "&x: " << &x << " &y: " << &y << " &z: " << &z << endl;
    p = &x;
    cout << p << endl;
    cout << "*p: " << *p << endl;
    p++; // incrementa o endereço até o próximo que tiver um int
    cout << p << endl;
    cout << "*p: " << *p << endl;
    p++;
    cout << p << endl;
    cout << "*p: " << *p << endl;
}