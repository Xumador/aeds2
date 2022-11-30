/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   biblioteca.h
 * Author: Usuário
 *
 * Created on 10 de março de 2022, 18:23
 */

#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <iostream>
#include <fstream>

using namespace std;

typedef struct info_
{
    string modelo;
    string marca;
    string tipo;
    int ano;
    int quilometragem;
    float potencia;
    string combustivel;
    string cambio;
    string direcao;
    string cor;
    int portas;
    string placa;
}info;

typedef struct no_
{
    info * dados;
    no_ * prox;
}no;

typedef struct cabeca
{
    no_ * inicio;
    int tam;
    no_ * fim;
}cabecalho;

cabecalho * inicia_lista();
void busca_lista(cabecalho * ptlista, string placa, no**ant, no**pont);
int insere_inicio(cabecalho * ptlista, info * dados);
int insere_fim(cabecalho * ptlista, info * dados);
int insere_lista(cabecalho * ptlista, info * dados); 
no * remove_inicio(cabecalho * ptlista);
no * remove_fim(cabecalho * ptlista);
info * remove_lista(cabecalho * ptlista, string placa); 
info * cria_dados();
void imprime_lista(cabecalho * ptlista);
void le_arq(cabecalho * ptlista);
void encerra_lista(cabecalho * ptlista);
int verifica_busca(info * dados, int operador_busca, int param_busca_int, float param_busca_float, string param_busca_string);
void new_buscas(cabecalho * ptlista, cabecalho * busca, int tipo, int operador_busca, int param_busca_int, float param_busca_float, string param_busca_string);
void escreve_arq(cabecalho * ptlista);
string altera_string(string palavra);

#endif /* BIBLIOTECA_H */

