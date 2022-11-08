/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: flavio, paulo
 *
 * Created on January 26, 2021, 11:00 AM
 */

#include <iostream>
#include <stdlib.h>
#include "pilha.h"

using namespace std;

tPilha * pilha1;

/*
 * 
 */
int main() {
    no * p;
    pilha1 = inicia_lista();

    push(pilha1, 5);
    cout<<"insere 1: ";
    imprime(pilha1);

    push(pilha1, 10);
    cout<<"insere 2: ";
    imprime(pilha1);


    push(pilha1, 20);
    cout<<"insere 5: ";
    imprime(pilha1);

    p = pop(pilha1);
    cout<<"remove 1: "<< p->valor <<endl;
    delete (p);
    imprime(pilha1);

 

    p = pop(pilha1);
    cout<<"remove 3: "<< p->valor <<endl;
    delete (p);
    imprime(pilha1);



    p = pop(pilha1);
    cout<<"remove 5: "<< p->valor <<endl;
    delete (p);
    imprime(pilha1);

    p = pop(pilha1);
    cout<<"remove 6: "<< endl;
    delete (p);
    imprime(pilha1);

    pilha1 = encerra_lista(pilha1);

    return (EXIT_SUCCESS);
}