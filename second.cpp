#include <iostream>
using namespace std;

int x = 11, y = 22, z = 33;
int *p; //(aponta para um local do tipo int)

int v[]={50,51,52,53,54,55,56,57,58,59};

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
