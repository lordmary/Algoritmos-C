#include <stdio.h>
#include <stdlib.h>
//Fila usando encadeamento simples
//contém 2 ponteiros, ini e fim, apontando para primeiro e último nó da fila

struct no{
    int info;
    struct no * prox;
};

struct fila{
    struct no * ini;
    struct no * fim;
};

Fila cria_fila(){
    Fila f;
    f = (Fila) malloc(sizeof(struct fila));
    if (f != NULL){
        f->ini = NULL;
        f->fim = NULL;
    }
    return f;
}

int fila_vazia(Fila f){
    if (f->ini == NULL)
        return 1;
    else
        return 0;
}

//Não existe operação fila_cheia()

int insere_fim(Fila f, int elem){
    struct no *N;
    N = (struct no *)malloc(sizeof(struct no));
    if (N == NULL)
        return 0;
    N->info = elem;
    N->prox = NULL;
    if (fila_vazia(f) == 1) //Fila vazia
        f->ini = N; //N é o primeiro nó
    else //Fila com elementos
        (f->fim)->prox = N; //Último nó aponta N
    f->fim = N; // N é o último nó
    return 1;
}

int remove_ini(Fila f, int *elem) {
    if (fila_vazia(f) == 1)
        return 0;
    
    struct no *aux = f->ini; //Aux aponta para primeiro nó
    *elem = aux->info; //Retorna valor do elemento

    //Verifica se a fila tem um único nó
    if (f->ini == f->fim)
        f->fim = NULL;
    
    f->ini = aux->prox; //Retira primeiro nó da fila
    free(aux); //Libera a memória alocada
    return 1;
}

int apaga_fila (Fila *f){
    if(*f == NULL) return 0;

    //Apaga os nós da fila
    struct no *aux = (*f)->ini;
    while (aux != NULL){
        struct no *aux2 = aux;
        aux = aux->prox;
        free(aux2);
    }
    //Apaga a estrutura fila
    free(*f);
    *f = NULL;

    return 1;
}

int esvazia_fila(Fila f){
    if(f == NULL ) return 0;
    //Apaga os nos da fila
    struct no *aux = f->ini;
    while (aux != NULL){
        struct no *aux2 = aux;
        aux = aux->prox;
        free(aux2);
    }

    //Coloca a fila no estado de vazia
    p->ini = NULL;
    p->fim = NULL;

    return 1; //SUCESSO
}