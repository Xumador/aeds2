/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   pilha.h
 * Author: 2021.1.08.011
 *
 * Created on 8 de novembro de 2022, 10:24
 */

#ifndef PILHA_H
#define PILHA_H
#include "lista.h"

typedef tLista tPilha;

inline tPilha * inicia_pilha(){
    return inicia_lista();
};

inline tPilha * encerra_pilha(tPilha *p){
    return encerra_lista(p);
};

inline void push (tPilha * p, int valor){
    insere_inicio(p,valor);
};

inline no * pop(tPilha * p){
    return remove_inicio(p);
};



#endif /* PILHA_H */

