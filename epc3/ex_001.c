/*
UFPI - Universidade Federal do Piauí
CCN - Ciência da Computação
Laboratório de Programação
Professor Helson
Aluno: Marcos Vinicius Ribeiro Alencar
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    char palavra[30];
    int val;
    int i,j;
    printf("Digite a palavra: ");
    scanf("%s", palavra);

    val = strlen(palavra);

    for ( i = 0; i <= val; i++){
        for ( j = 0; j < i ; j++){
            printf("%s ", palavra);
        }
        printf("\n");
    }
    return 0;
}
