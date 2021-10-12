#include <stdio.h>
#include <stdlib.h>

/*Programa captura e apresenta valores de uma matriz 10x10
e a diagonal segundaria dessa matriz
*/
int main()
{
    int A[10][10];//Array Matriz
    int At[10][10];//Array Matriz
    int i,j;
    int N = 0,M = 0;//Ordem da matriz
    //Laço de captura de valores

    printf("Digite o valor maximo de linhas no intervalo de 2 e 10: \n");
    scanf("%d",&N);
    if( N >= 2 && N <= 10)//condição de acordo com o criterio desejado
    {
        printf("Aceito!\n");
    }
    else
    {
        printf("Negado!\n");
        printf("Numero fora do limite! Digite novamente!");
        return 5;
    }
    printf("Digite o valor maximo de colunas no intervalo de 2 e 10: \n");
    scanf("%d",&M);
    if( M >= 2 && M <= 10)//condição de acordo com o criterio desejado
    {
        printf("Aceito!\n");
    }
    else
    {
        printf("Negado!\n");
        printf("Numero fora do limite! Digite novamente!");
        return 5;
    }
//Digitando os valores da matriz
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=M; j++)
        {
            printf("Digite o valor da posicao:[%d][%d]",i,j);
            scanf("%d",&A[i][j]); //Captura os valores da matriz
        }
    }
// 1 primeiro printf
//Laço de apresentação dos valores
    for(i=1; i<=N; i++)
    {

        for(j=1; j<=M; j++)
        {
            printf("[%d]",A[i][j]); //Apresenta os valores da matriz de acordo com a posição
        }
        printf("\n");

    }
    printf("\n");

//Guarda a matriz transposta
    for(j=1; j<=M; j++)
    {
        for(i=1; i<=N; i++)
        {
            At[j][i] = A[i][j];
        }
        printf("\n");

    }
    printf("\n");

    printf("matriz transposta \n");
    for(j=1; j<=M; j++)
    {
        for(i=1; i<=N; i++)
        {
            printf("[%d]",At[j][i]); //Apresenta os valores da matriz transposta de acordo com a posição

        }
        printf("\n");

    }
    int multi = 0, soma =0;
    multi= N*M;

    for(i = 1; i<=M; i++ )

    {
        for(j = 1; j<=M; j++)
        {

            if (A[i][j] == A[j][i])
            {
                soma++;
            }
        }
    }

    if(multi == soma)
    {
        printf("\nsimetrica");

    }
    else
    {
        printf("\nnenhuma simetrica");
    }


    return 0;
}
