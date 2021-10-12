#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)

 struct dados_pacientes {

    int idade, e_civil;
    char nome[10];
    double peso, altura;
    float grau_miopia[2];
    };

int main()
{
    struct dados_pacientes paciente;

    unsigned int tamanho_total;

    strcpy(paciente.nome,"Jose");
    paciente.altura = 1.25;
    paciente.peso = 73;
    paciente.e_civil = 1; //0: solteiro, 1:casado, 2:outro
    paciente.grau_miopia[0] = 1.75; //olho esquerdo
    paciente.grau_miopia[1] = 0; //olho direito

    printf("\ntamanho em bytes de idade (int): %u", sizeof paciente.idade);
    printf("\ntamanho em bytes de e_civil (int): %u", sizeof paciente.e_civil);
    printf("\ntamanho em bytes de nome[10] (char): %u", sizeof(paciente.nome));
    printf("\ntamanho em bytes de peso (double): %u", sizeof paciente.peso);
    printf("\ntamanho em bytes de altura (double): %u", sizeof paciente.altura);
    printf("\ntamanho em bytes de grau_miopia[2] (float): %u", sizeof paciente.grau_miopia);

    tamanho_total = sizeof(paciente.idade) + sizeof(paciente.e_civil) + sizeof(paciente.nome) + sizeof(paciente.peso)
                  + sizeof(paciente.altura) + sizeof(paciente.grau_miopia);


    printf("\ntamanho em bytes que a estrutura deveria ter: %u", tamanho_total);
    printf("\ntamanho em bytes que a estrutura tem: %u",sizeof(paciente));


    return 0;
}
