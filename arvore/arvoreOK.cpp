#include <iostream>
#include <stdlib.h>
#include "operations.h"
using namespace std;
int main()
{
    int op, valor;
    ArvB arv;
    arv.raiz = NULL;

    No *raiz = NULL;

    do
    {
        cout << "\n0 - sair\n1 - inserir\n2 - imprimir\n3 - Buscar\n4 - Remover\n";
        cin >> op;

        switch (op)
        {
        case 0:
            cout << "\nSaindo...\n";
            break;
        case 1:
            cout << "Digite um valor: ";
            cin >> valor;
            raiz = inserirNovaVersao(raiz, valor); // não precisa da estrutura ArvB
            // inserir(&arv, valor);// para utilizar esta inserção, comente a anterior
            break;
        case 2:
            cout << "\nImpressao da arvore binaria:\n";
            imprimir(raiz);
            cout << endl;
            cout << "Tamanho: " << tamanho(raiz) << endl;
            cout << "Em-ordem: ";
            inOrder(raiz);
            cout << endl;
            cout << "Pós-ordem: ";
            posOrder(raiz);
            cout << endl;
            cout << "Pré-ordem: ";
            preOrder(raiz);
            cout << endl;
            break;
        case 3:
            cout << "Qual valor deseja buscar? ";
            cin >> valor;
            cout << "Resultado da busca: " << buscar(raiz, valor) << endl;
            break;
        case 4:
            cout << "Digite um valor a ser removido: ";
            cin >> valor;
            raiz = remover(raiz, valor);
            break;
        default:
            cout << "\nOpcao invalida...\n";
        }
    } while (op != 0);
}