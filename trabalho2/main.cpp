#include <iostream>
#include <fstream>
#include "biblioteca.h"

using namespace std;

int main (void) 
{
    cabecalho * lista = inicia_lista();
    cabecalho * busca1 = inicia_lista();
    cabecalho * busca2 = inicia_lista();
    le_arq(lista);
    
    int param, tipo_busca, operador_busca, param_busca_int;
    float param_busca_float;
    string placa, param_busca_string;
    info * dados = new info;

    cout << "Bem vindo!" << endl;

    do{
        cout << endl << "========================================" << endl;
        cout << "1 - Insere novo nó" << endl;
        cout << "2 - Remove nó" << endl;
        cout << "3 - Busca por parametros" << endl;
        cout << "4 - Relatorio da lista" << endl;
        cout << "5 - Fechar o programa" << endl;
        cout << "========================================" << endl;
        cin >> param;
        switch (param)
        {
        case 1:
            dados = cria_dados();
            cout << "nó inserido" << endl;
            insere_lista(lista, dados);
            break;
        case 2:
            cout << "Digite a placa a ser removida: ";
            cin >> placa;
            dados = remove_lista(lista, placa);
            break;
        case 3:
            cout << "Para busca 1: (0) fila (1) Pilha" << endl;
            cin >> tipo_busca;

            cout << "========================================" << endl;
            cout << "Operadores de Busca: " << endl;
            cout << "0 - Ano" << endl;
            cout << "1 - KM" << endl;
            cout << "2 - Portas" << endl;
            cout << "3 - Potencia" << endl;
            cout << "4 - Combustivel" << endl;
            cout << "5 - Modelo" << endl;
            cout << "6 - Marca" << endl;
            cout << "7 - Tipo" << endl;
            cout << "8 - Cambio" << endl;
            cout << "9 - Direcao" << endl;
            cout << "10 - Cor" << endl;
            cout << "========================================" << endl;

            cout << "operador para busca 1: ";
            cin >> operador_busca;
            cout << "parametro da busca para busca 1: ";
            if (operador_busca < 3) {
                cin >> param_busca_int;
            } else if (operador_busca == 3) {
                cin >> param_busca_float;
            } else {
                cin >> param_busca_string;
                param_busca_string = altera_string(param_busca_string);
            }
            new_buscas(lista, busca1, tipo_busca, operador_busca, param_busca_int, param_busca_float, param_busca_string);
            cout << "Para busca 2: (0) fila (1) Pilha" << endl;
            cin >> tipo_busca;
            cout << "operador para busca 2: ";
            cin >> operador_busca;
            cout << "parametro da busca para busca 2: ";
            if (operador_busca < 3) {
                cin >> param_busca_int;
            } else if (operador_busca == 3) {
                cin >> param_busca_float;
            } else {
                cin >> param_busca_string;
                param_busca_string = altera_string(param_busca_string);
            }
            new_buscas(lista, busca2, tipo_busca, operador_busca, param_busca_int, param_busca_float, param_busca_string);
            imprime_lista(busca1);
            imprime_lista(busca2);
            break;
        case 4:
            imprime_lista(lista);
            break;
        case 5:
            cout << endl << "Obrigado querido Bressan!!!" << endl << endl << "Luiz Felipe dos Santos Nogueira - 2021.1.08.016" << endl << "Thiago Oliveira da Silva - 2019.1.08.028" << endl << "Túlio Sérgio Rosa Trombini - 2021.1.08.022" << endl;
            break;
        default:
            cout << "Digite um valor valido!" << endl;
            break;
        }
    } while (param != 5);
    
    escreve_arq(lista);
    encerra_lista(lista);
    encerra_lista(busca1);
    encerra_lista(busca2);
    delete lista;
    delete busca1;
    delete busca2;
    
    return 0;
}