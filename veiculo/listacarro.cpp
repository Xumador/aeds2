#include <iostream>
#include <fstream>
using namespace std;

typedef struct Tveiculo // struct do tipo Tveiculo
{
    string modelo, marca, tipo, gas, cambio, direcao, cor, placa;
    int ano, km, portas;
    float potencia;
};
Tveiculo *busca(Tveiculo *bd[], int tam, string placa)
{
    while (placa != bd[tam - 1]->placa)
    {
        cout << "Placa incorreta, tente novamente." << endl;
        cin >> placa;
    }
    if (placa == bd[tam - 1]->placa)
    {
        cout << bd[tam - 1]->modelo << " ";
        cout << bd[tam - 1]->marca << " ";
        cout << bd[tam - 1]->tipo << " ";
        cout << bd[tam - 1]->ano << " ";
        cout << bd[tam - 1]->km << " ";
        cout << bd[tam - 1]->potencia << " ";
        cout << bd[tam - 1]->gas << " ";
        cout << bd[tam - 1]->cambio << " ";
        cout << bd[tam - 1]->direcao << " ";
        cout << bd[tam - 1]->cor << " ";
        cout << bd[tam - 1]->portas << " ";
        cout << bd[tam - 1]->placa << endl;
    }
}

int main()
{
    ifstream carrin("carro.txt");
    Tveiculo *bd[50]; // ponteiro de Tveiculo
    int tam = 0;
    if (carrin.is_open())
    {
        cout << "ABRIU" << endl;
        while (!carrin.eof())
        {
            bd[tam] = new Tveiculo; // cria a struct que sera apontada pelo vetor de ponteiro bd
            carrin >> bd[tam]->modelo;
            carrin >> bd[tam]->marca;
            carrin >> bd[tam]->tipo;
            carrin >> bd[tam]->ano;
            carrin >> bd[tam]->km;
            carrin >> bd[tam]->potencia;
            carrin >> bd[tam]->gas;
            carrin >> bd[tam]->cambio;
            carrin >> bd[tam]->direcao;
            carrin >> bd[tam]->cor;
            carrin >> bd[tam]->portas;
            carrin >> bd[tam]->placa;
            tam++;
        }
        carrin.close();
        /*for (int i = 0; i < tam; i++)
        {
            cout << bd[i]->modelo << " ";
            cout << bd[i]->marca << " ";
            cout << bd[i]->tipo << " ";
            cout << bd[i]->ano << " ";
            cout << bd[i]->km << " ";
            cout << bd[i]->potencia << " ";
            cout << bd[i]->gas << " ";
            cout << bd[i]->cambio << " ";
            cout << bd[i]->direcao << " ";
            cout << bd[i]->cor << " ";
            cout << bd[i]->portas << " ";
            cout << bd[i]->placa << endl;
        }*/
        // atribuindo NULL aos espaços livres
        for (int i = tam; i < 50; i++)
        {
            bd[i] = NULL;
        }
        // Removendo as structs da memória
        for (int i = 0; i < tam; i++)
        {
            delete (bd[i]);
        }
    }
    else
        cout << "N ABRIU" << endl;
    char a;
    cout << "Deseja realizar uma busca? [Sim(s)/Não(n)]"; // A = 65
    cin >> a;
    while (a != 'A' + 50 && a != 'A' + 18 && a != 'A' + 45 && a != 'A' + 13)
    {
        cout << "Entrada inválida, tente novamente." << endl
             << "[S/n]: ";
        cin >> a;
    }
    if (a == 's' || a == 'S')
    {
        int pos;
        string plate;
        cin >> pos >> plate;
        busca(bd, pos, plate);
    }
}
