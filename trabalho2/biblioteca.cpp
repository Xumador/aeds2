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

cabecalho* inicia_lista () 
{
    cabecalho * tmp = new cabecalho;
    tmp->inicio = NULL;
    tmp->tam = 0;
    tmp->fim = NULL;
    return tmp;
}
// OK vai no arquivo de lista
void busca_lista(cabecalho * ptlista, string placa, no**ant, no**pont) 
{
    no * ptr = ptlista->inicio;
    *pont = NULL;
    *ant = ptlista->inicio;
    while (ptr != NULL) {
        if (ptr->dados->placa < placa) {
            *ant = ptr;
            ptr = ptr->prox;
        } else {
            if (ptr->dados->placa == placa) {
                *pont = ptr;
            } 
            ptr = NULL;
        }
    }
}
// OK vai no arquivo de lista, mas tem que fazer a implementacao como pilha/fila
int insere_inicio(cabecalho * ptlista, info * dados)
{
    no * tmp = new no;

    tmp->dados = dados;

    if (ptlista->tam == 0) {
        tmp->prox = NULL;
        ptlista->inicio = tmp;
        ptlista->fim = tmp;
    } else {
        tmp->prox = ptlista->inicio;
        ptlista->inicio = tmp;
    }
    ptlista->tam++;
}
// OK vai no arquivo de lista, mas tem que fazer a implementacao como pilha/fila
int insere_fim(cabecalho * ptlista, info * dados)
{
    no * tmp = new no;

    tmp->dados = dados;

    if (ptlista->tam == 0) {
        tmp->prox = NULL;
        ptlista->inicio = tmp;
        ptlista->fim = tmp;
    } else {
        tmp->prox = NULL;
        (ptlista->fim)->prox = tmp;
        ptlista->fim = tmp;
    }
    ptlista->tam++;
}
// OK vai no arquivo de lista
int insere_lista(cabecalho * ptlista, info * dados) 
{
    no * ant;
    no * pont;

    int retorno = -1;

    if (ptlista->inicio == NULL || ptlista->inicio->dados->placa > dados->placa) {
        insere_inicio(ptlista, dados);
        retorno = 0;
    } else if (ptlista->fim->dados->placa < dados->placa) {
        insere_fim(ptlista, dados);
        retorno = 0;
    } else {
        busca_lista(ptlista, dados->placa, &ant, &pont);

        if (pont == NULL) {
            no * tmp = new no;
            tmp->dados = dados;
            tmp->prox = ant->prox;
            ant->prox = tmp;
            ptlista->tam++;   
            retorno = 0; 
        }    
    }
    return retorno;
}
// OK vai no arquivo de lista, mas tem que fazer a implementacao como pilha/fila
no * remove_inicio(cabecalho * ptlista)
{
    if (ptlista->tam == 1) {
        no * tmp = ptlista->inicio;
        ptlista->inicio = NULL;
        ptlista->fim = NULL;
        delete tmp;
    } else if (ptlista->tam > 1) {
        no * tmp = ptlista->inicio;
        ptlista->inicio = tmp->prox;
        delete tmp; 
    }
    ptlista->tam--;
}
// OK vai no arquivo de lista, mas tem que fazer a implementacao como pilha/fila
no * remove_fim(cabecalho * ptlista)
{
    if (ptlista->tam == 1) {
        no * tmp = ptlista->inicio;
        ptlista->inicio = NULL;
        ptlista->fim = NULL;
        delete tmp;
    } else if (ptlista->tam > 1) {
        no * tmp = ptlista->inicio;
        while (tmp->prox != ptlista->fim) {
            tmp = tmp->prox;
        }
        delete tmp->prox; 
        tmp->prox = NULL;
        ptlista->fim = tmp;
    }
    ptlista->tam--;
}
// OK vai no arquivo de lista
info * remove_lista(cabecalho * ptlista, string placa) 
{
    no * ant;
    no * pont;

    info * recuperado = NULL;

    if (ptlista->inicio->dados->placa == placa) {
        recuperado = ptlista->inicio->dados;
        remove_inicio(ptlista);
    } else if (ptlista->fim->dados->placa == placa) {
        recuperado = ptlista->fim->dados;
        remove_fim(ptlista);
    } else {
        busca_lista(ptlista, placa, &ant, &pont);  

        if (pont != NULL) {
            ant->prox = pont->prox;
            recuperado = pont->dados;
            ptlista->tam--;
            delete pont;
        }  
    }    
    return recuperado;
}
// OK vai no arquivo de func
info * cria_dados()
{
    info * tmp = new info;
    cout << "modelo: ";
    cin >> tmp->modelo;
    cout << "marca: ";
    cin >> tmp->marca;
    cout << "tipo: ";
    cin >> tmp->tipo;
    cout << "ano: ";
    cin >> tmp->ano;
    cout << "KM: ";
    cin >> tmp->quilometragem;
    cout << "potencia: ";
    cin >> tmp->potencia;
    cout << "combustivel: ";
    cin >> tmp->combustivel;
    cout << "cambio: ";
    cin >> tmp->cambio;
    cout << "direcao: ";
    cin >> tmp->direcao;
    cout << "cor: ";
    cin >> tmp->cor;
    cout << "portas: ";
    cin >> tmp->portas;
    cout << "placa: ";
    cin >> tmp->placa;

    return tmp;
}
// OK vai no arquivo de func
void imprime_lista(cabecalho * ptlista) 
{
    no * tmp = ptlista->inicio;
    cout << endl << "tamanho: " << ptlista->tam << endl;
    while (tmp != NULL) {
        cout << "Modelo: " << tmp->dados->modelo << "; ";
        cout << "Marca: " << tmp->dados->marca << "; ";
        cout << "Tipo: " << tmp->dados->tipo << "; ";
        cout << "Ano: " << tmp->dados->ano << "; ";
        cout << "Quilimetragem: " << tmp->dados->quilometragem << "; ";
        cout << "Potencia: " << tmp->dados->potencia << "; ";
        cout << "Combustivel: " << tmp->dados->combustivel << "; ";
        cout << "Cambio: " << tmp->dados->cambio << "; ";
        cout << "Direcao: " << tmp->dados->direcao << "; ";
        cout << "Cor: " << tmp->dados->cor << "; ";
        cout << "Portas: " << tmp->dados->portas << "; ";       
        cout << "Placa: " << tmp->dados->placa << "; ";
        cout << endl;
        tmp = tmp->prox;
    }
    cout << endl << endl;
}
// OK vai no arquivo de func
void le_arq(cabecalho * ptlista)
{
    string line;
    ifstream dados("BD_veiculos.txt");
    if (dados.is_open())
    {
        while ( !dados.eof() )
        {
            info * tmp = new info;
            float potencia;
            dados >> tmp->modelo;
            dados >> tmp->marca;
            dados >> tmp->tipo;
            dados >> tmp->ano;
            dados >> tmp->quilometragem;
            dados >> tmp->potencia;
            dados >> tmp->combustivel;
            dados >> tmp->cambio;
            dados >> tmp->direcao;
            dados >> tmp->cor;
            dados >> tmp->portas;
            dados >> tmp->placa;
            insere_lista(ptlista, tmp);
        }
        dados.close();
    }
}

// OK
void encerra_lista(cabecalho * ptlista)
{
    no * ant;
    no * ptr;
    if (ptlista->inicio != NULL) {
        ant = ptlista->inicio;
        ptr = (ptlista->inicio)->prox;
        while (ptr != NULL) {
            delete ant;
            ant = ptr;
            ptr = ptr->prox;
        }
        delete ant;     
        ptlista->tam = 0;
        ptlista->inicio = NULL;
        ptlista->fim = NULL;           
    } else {
        delete ptlista;
    }
}

int verifica_busca(info * dados, int operador_busca, int param_busca_int, float param_busca_float, string param_busca_string)
{
    int verifica = -1;
        switch(operador_busca)
        {
        case 0: 
            if(dados->ano == param_busca_int) {
                verifica = 0;
            }
            break;
        case 1: 
            if (dados->quilometragem == param_busca_int) {
                verifica = 0;
            }
            break;
        case 2:
            if (dados->portas == param_busca_int) {
                verifica = 0;
            }
            break;
        case 3:
            if (dados->potencia == param_busca_float) {
                verifica = 0;
            }
            break;
        case 4:
            if (dados->combustivel == param_busca_string) {
                verifica = 0;
            }
            break;    
        case 5:
            if (dados->modelo == param_busca_string) {
                verifica = 0;
            }
            break; 
        case 6:
            if (dados->marca == param_busca_string) {
                verifica = 0;
            }
            break;   
        case 7:
            if (dados->tipo == param_busca_string) {
                verifica = 0;
            }
            break;   
        case 8:
            if (dados->cambio == param_busca_string) {
                verifica = 0;
            }
            break;    
        case 9:
            if (dados->direcao == param_busca_string) {
                verifica = 0;
            }
            break;
        case 10:
            if (dados->cor == param_busca_string) {
                verifica = 0;
            }
            break;   
    }
    return verifica;
}

// 1 para pilha 0 para fila
void new_buscas(cabecalho * ptlista, cabecalho * busca, int tipo, int operador_busca, int param_busca_int, float param_busca_float, string param_busca_string) 
{
    int aux;
    no * tmp = ptlista->inicio;

    if (busca->inicio != NULL) {
        encerra_lista(busca);
    }

    while (tmp != NULL) {
        aux = verifica_busca(tmp->dados, operador_busca, param_busca_int, param_busca_int, param_busca_string);
        if (aux == 0) {
            if (tipo == 1) {
                insere_inicio(busca, tmp->dados);    
            } else {
                insere_fim(busca, tmp->dados);
            } 
        }
        tmp = tmp->prox;
    }
}

void escreve_arq(cabecalho * ptlista) 
{
    string line;
    ofstream dados;
    dados.open ("BD_veiculos.txt");
    if (dados.is_open())
    {
        no * ptr = ptlista->inicio;
        while (ptr != NULL)
        {
            dados << ptr->dados->modelo << " ";
            dados << ptr->dados->marca << " ";
            dados << ptr->dados->tipo << " ";
            dados << ptr->dados->ano << " ";
            dados << ptr->dados->quilometragem << " ";
            dados << ptr->dados->potencia << " ";
            dados << ptr->dados->combustivel << " ";
            dados << ptr->dados->cambio << " ";
            dados << ptr->dados->direcao << " ";
            dados << ptr->dados->cor << " ";
            dados << ptr->dados->portas << " ";
            dados << ptr->dados->placa;
            if (ptr->prox != NULL) {
                dados << endl;
            }
            ptr = ptr->prox;
        }
        dados.close();
    } 
}

string altera_string(string palavra)
{
    for (int i = 0; i < palavra.length(); i++) 
    {
        palavra[i] = tolower(palavra[i]);
    }
    palavra[0] = toupper(palavra[0]);
    return palavra;
}