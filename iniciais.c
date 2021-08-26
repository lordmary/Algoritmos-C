#include <stdio.h>
#include <stdlib.h>
/* Programa que apresenta as iniciais do nome de uma pessoa.
Ex: se o usuário digitar "fulano de tal" o programa retorna "fdt"

OBS: o nome é capturado com scanf() %c e utiliza do while.
*/

int main()
{


    char nome[100];

    int x = 0;

    printf("Digite o nome: ");

    do
    {

        scanf("%[^\n]", nome);

        if ( x == 0)

        {

            printf("%c", nome[x]);

            x = x + 1;

        }

        else

        {

            if (nome[x] == ' ')

            {

                x = x + 1;

                printf("%c", nome[x]);

            }

            else

            {

                x = x + 1;

            }

        }
    }

    while (nome[x] != '\0');

    return 0;

}