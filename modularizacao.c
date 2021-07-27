#include <stdio.h>
#include <stdlib.h>

 int funcao (int elementos, int *vetor){
 int i;
 int media = 0, soma = 0;
 int contador = 0;

 //somatoria dos elementos do vetor
 for (i=0; i<elementos; i++)
    soma = soma + vetor[i];

 //media dos elementos
 media = soma/elementos;

 for (i=0; i<elementos; i++)
 if (vetor[i]<media){
    contador++;
 }
 printf("\nQuantidade de numeros menores que a media: %d\n", contador);

 return media;


 };

int main(int argc, char *argv[])
{

int vetor[15];
int media;
int i;

for (i = 0; i < 15; i++)
{
    printf("Digite o valor do elemento: ");
    scanf("%d", &vetor[i]);
}
media = funcao(15,vetor);

printf("\n media = %d \n", media);

return 0;

}
