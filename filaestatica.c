#include <stdio.h>
#include <stdlib.h>
//Fila estática sequencial

#define MAX 20

struct fila{
    int no[MAX];
    int ini, fim;
};

Fila cria_fila(){
    Fila p = (Fila) malloc(sizeof(struct fila));

        if (p != NULL){
            p->ini = 0;
            p->fim = 0;
        }
    return p;
}

int fila_vazia(Fila p){
    if(p == NULL) return -1;
    return (p->ini == p->fim);
}

int fila_cheia(Fila p){
    if(p == NULL) return -1;
    return (p->ini == (p->fim+1)%MAX);
            /*
            fim = fim+1;
            if(fim==MAX)
            fim = 0;
            */
}

int insere_fim(Fila p, int elem) {
    if (p == NULL || fila_cheia(p))
        return 0; //FALHA

    p->no[p->fim] = elem; //Insere elemento no final da fila
    p->fim = (p->fim+1)%MAX;//Avança fim (incremento circular)

    return 1; //SUCESSO
}

int remove_ini(Fila p, int *elem){
    if (p == NULL || fila_vazia(p))
        return 0;//FALHA

    *elem = p->no[p->ini]; //Retorna valor do elem
    p->ini = (p->ini+1)%MAX;

    return 1;
}

void apaga_fila (Fila *p){
    free(*p);
    *p = NULL;
}

void esvazia_fila(Fila p){
    p->ini = 0;
    p->fim = 0;
}