#include <iostream>
#include <fstream>
using namespace std;

typedef struct Tveiculo // struct do tipo Tveiculo
{
    string modelo, marca, tipo, gas, cambio, direcao, cor, placa;
    int ano, km, portas;
    float potencia;
};
Tveiculo * bd[50]; // ponteiro de Tveiculo

int main()
{
    int tam = 0;

    ifstream carrin("carro.txt");
    if (carrin.is_open())
    {
        cout << "ABRIU" << endl;
        while (!carrin.eof())
        {
            bd[tam] = new Tveiculo; // cria a struct que sera apontada pelo vetor de ponteiro bd
            carrin >> bd[tam]->modelo;
            carrin >> bd[tam]->marca;
            carrin >> bd[tam]->tipo;
            carrin >> bd[tam]->gas;
            carrin >> bd[tam]->cambio;
            carrin >> bd[tam]->direcao;
            carrin >> bd[tam]->cor;
            carrin >> bd[tam]->placa;
            carrin >> bd[tam]->ano;
            carrin >> bd[tam]->km;
            carrin >> bd[tam]->portas;
            carrin >> bd[tam]->potencia;
            tam++;
            cout << tam << endl;
        }
        carrin.close();
        for (int i = 0; i < tam; i++)
        {
            cout << bd[i]->modelo << " ";
            cout << bd[i]->marca << " ";
            cout << bd[i]->tipo << " ";
            cout << bd[i]->gas << " ";
            cout << bd[i]->cambio << " ";
            cout << bd[i]->direcao << " ";
            cout << bd[i]->cor << " ";
            cout << bd[i]->placa << " ";
            cout << bd[i]->ano << " ";
            cout << bd[i]->km << " ";
            cout << bd[i]->portas << " ";
            cout << bd[i]->potencia << " ";
        }
    }
    else
        cout << "N ABRIU" << endl;
}/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cpplite/CPPTemplate.cpp to edit this template
 */
