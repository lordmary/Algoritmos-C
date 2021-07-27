#include <stdio.h>
#include <stdlib.h>
#define N 3

struct aluno{
    int matricula;
    char nome [20];
    int nota;
};

struct aluno ler (){
    struct aluno a;
    printf("Digite a matricula:\n");
    scanf("%d",&a.matricula);

    printf("Digite o nome do aluno:\n");
    fflush(stdin);
    gets(a.nome);

    printf("Digite a nota:\n");
    scanf("%d",&a.nota);

return a;
}

void imprime (struct aluno a[N]){
    int x;
    for (x=0; x<N; x++){
    printf("   %d",a[x].matricula);
    printf(" ; %s",a[x].nome);
    printf(" ; %d",a[x].nota);
    printf("\n");
}}

int main ()
{
    int x;
    char caminho[]="aluno.txt",caractere;
    FILE *arquivo;
    arquivo = fopen (caminho,"w");

    struct aluno a[N];

    if (arquivo==NULL){
            printf("Problemas na criacao do arquivo.\n");
    }
    else{
            for(x=0; x<N; x++){
        a[x]= ler();
    fprintf(arquivo,"  %d",a[x].matricula);
    fprintf(arquivo,"; %s",a[x].nome);
    fprintf(arquivo,"; %d",a[x].nota);
    fprintf(arquivo,"\n");
    printf("\tO arquivo foi gravado com sucesso.\n");
}
    fclose(arquivo);
}
    imprime(a);

return 0;
    }
