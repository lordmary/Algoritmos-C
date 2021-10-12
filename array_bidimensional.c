/*
programa que apresenta o conteúdo de um array
bidimensional m[N][N], tal que N = 4
e a diagonal principal da mesma
*/

#include <stdio.h>
#include <stdlib.h> // para função rand
#include <time.h> // para a função time
#define N 4

/*
função que faz o carregamento de m com os números pseudoaleatórios
*/
void loadA( int m)
{

    int i = 0;
    int j = 0;

    srand(time(NULL)); // para a semente ser a hora do computador

    for ( i = 0; i < N ; i++)
    {
        for ( j = 0; j < N; j++)
        {

            m[i][j] = (rand() % 21); //para gerar numeros aleatorios de 0 a 20
        }

    }


}
/*
função que realiza a apresentação de m
*/
void showArrayBi(int m[N][N], int n)
{

    int i = 0;
    int j = 0;

    for ( i = 0; i < N; i++)
    {
        printf("\n");

        for ( j = 0; j < N; j++)
        {
            printf("%d", m[i][j]);
        }
    }

}


/*
função que realiza apresentação da diagonal principal
*/
void dp(int m[N][N], int n)
{
    int i = 0;
    int j = 0;

    for(i = 0; i< n; i++)
    {
        if(j < N)
            printf("\n diagonal principal: %d", m[i][j]);
        j++;

    }
}



int main()
{
    int i = 0;
    int j = 0;
    int m[N][N];
    int s = 0; //vai receber o valor da função

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {

            m[i][j] = loadA(s);
        }

    }

    showArrayBi(m, N);

    dp(m, N);


    return 0;

}
