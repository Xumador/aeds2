#ifndef OPERATIONS_H
#define OPERATIONS_H

typedef struct no
{
    int conteudo;
    struct no *esquerda, *direita;
} No;

// estrutura árvore com um ponteiro para um nó
typedef struct
{
    No *raiz;
    int tam;
} ArvB;

/*  Assinatura do procedimento inserirDireita()
    necessário pois é utilizado no procedimento inserirEsquerda,
    antes deste ser criado
*/
void inserirDireita(No *no, int valor);

void inOrder(No *atual);
void posOrder(No *atual);
void preOrder(No *atual);
void inserirEsquerda(No *no, int valor);
void inserirDireita(No *no, int valor);
No *inserirNovaVersao(No *raiz, int valor);
int tamanho(No *raiz);
int buscar(No *raiz, int chave);
void imprimir(No *raiz);
No *remover(No *raiz, int chave);
#endif