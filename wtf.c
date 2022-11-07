#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct no_ no;
struct no_ {
  int valor;
  no * prox;
};

/**
 * 
 * @param cabeca = endereco do no cabeca.
 * @param valor = valor a ser inserido.
 * @return 1 caso seja possivel inserir, e 0 caso contrario.
 *
 */
int inserir(no * cabeca, int valor) {
	no *pont = NULL;
	no *ant = cabeca;
	no *ptr = cabeca->prox;
	
	while (ptr != NULL)
	{
		if(ptr->valor < valor){
			ant = ptr;
			ptr = ptr->prox;
		} else {
			if(ptr->valor == valor){
				return 0;
			} 
			pont = ptr;
			ptr = NULL;
		}
	}
	
	no *tmp = malloc(sizeof(no));
	tmp->valor = valor;
	tmp->prox = ant->prox;
	ant->prox = tmp;

	
    /*while(cabeca->prox != NULL){
        }
        cabeca=cabeca->prox;
    }
    cabeca->valor = valor;
    cabeca->prox = malloc(sizeof(no));
    return 1;o));
    return 1;
	*/
    //TODO: implemente a funcao inserir.
    //O cabecalho da funcao nao pode ser alterado.
}

/**
 * 
 * @param cabeca = endereco do no cabeca.
 * @param valor = valor a ser removido.
 * @return = ponteiro para o no removido, ou NULL caso nao seja possivel remover.
 */
no * remover(no * cabeca, int valor) {
	no *pont = NULL;
	no *ant = cabeca;
	no *ptr = cabeca->prox;
	
	while (ptr != NULL)
	{
		if(ptr->valor < valor){
			ant = ptr;
			ptr = ptr->prox;
		} else {
			if(ptr->valor != valor){
				return NULL;
			} 
			pont = ptr;
			ptr = NULL;
		}
	}

	ant->prox = pont->prox;
	return pont;

	/*
    while(cabeca->valor != valor){
        if(cabeca->prox == NULL){
            printf("Valor não encontrado.\n");
            return NULL;
        }
        if(cabeca->valor == valor){
            return cabeca;
        }
    }
	*/
    //TODO: implemente a funcao remover.
    //O cabecalho da funcao nao pode ser alterado.
}

/**
 * 
 * @param cabeca = endereco do no cabeca.
 */
void escrever(no * cabeca) {
	printf("[");
	no * atual = cabeca->prox;

	while (atual != NULL) {
		printf("%d", atual->valor);
		if (atual->prox != NULL)
			printf(" -> ");

		atual = atual->prox;
	}
	printf("]\n\n");
}

/**
 * 
 * @param cabeca = endereco do no 
        }
        cabeca=cabeca->prox;
    }
    cabeca->valor = valor;
    cabeca->prox = malloc(sizeof(no));
    return 1;cabeca.
 */
void desaloca_lista(no * cabeca){
	while(cabeca != NULL){
		no * n = cabeca;
		cabeca = cabeca->prox;
		free(n);
	}
}

/**
 * 
 * @return = ponteiro para o no cabeca alocado.
 */
no* aloca_no_cabeca(){
	no * cabeca = malloc(sizeof(no));
	cabeca->prox = NULL;
	return cabeca;
}

int main()
{
	no * cabeca = aloca_no_cabeca();
	no * n;
	
	int valor;
	int ans = 0;

	do {
        //Opcoes:
		//0 -> inserir
		//1 -> remover
		//2 -> escrever
		//3 -> sair
		scanf("%d", & ans);

		switch (ans) {
            //inserir
			case 0:
				scanf("%d", &valor);
                inserir(cabeca, valor);

				break;
            //remover
			case 1:
				scanf("%d", &valor);
				n = remover(cabeca, valor);
				if (n != NULL) {
					free(n);
				}

				break;
            //escrever
			case 2:
				escrever(cabeca);
				
				break;
            //sair
			case 3:
				desaloca_lista(cabeca);
				
				break;
			default:
				
				break;
		}
	} while (ans != 3);

	return (0);
}

