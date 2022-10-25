#include <iostream>
#include <fstream>
using namespace std;

typedef struct Tveiculo
{
    string modelo, marca, tipo, gas, cambio, direcao, cor, placa;
    int ano, km, portas, potencia;
};
Tveiculo *bd[50];

int main()
{
    ifstream carrin("carro");
    string line;
    if (carrin.is_open())
    {
        cout << "ABRIU" << endl;
        while (!carrin.eof())
        {
            for (Tveiculo *a = bd[0]; a < bd[0] + 50; a++)
            {
                // É POR AQUI
            }
            carrin >> line;
            cout << " teste: " << line << endl;
        }
        carrin.close();
    }
    else
        cout << "N ABRIU" << endl;
}