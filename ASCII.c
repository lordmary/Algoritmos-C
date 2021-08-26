#include <stdio.h>
#include <stdlib.h>
/*
Programa que lê o que um usuário digita e criptgrafa apresentando
o valor numérico conforme a tabela ASCII

OBS: o programa termina quando o usuário digita "FIM";
o nome é capturado com scanf() %c e utiliza do while.
*/

int main()
{

    char palavra[100];
    int x=0;
    int cont=0;

    do
    {
        printf("\ncaractere:\n");
        scanf("%s",&palavra);

        printf("\n%s:\n",palavra);

        cont=strlen(palavra);

        for(x=0; x<=cont-1; x++)
        {
            printf(" %d",palavra[x]);
        }

    }
    while (palavra[0]!='F' && palavra[1]!='I' && palavra[2]!='M');
    printf("\n fim do programa\n");




    return 0;
}
