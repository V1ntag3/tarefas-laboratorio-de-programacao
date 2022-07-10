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
int main(int argc, char const *argv[]){
    char palavra[30];
    char palavrain[30];
    printf("Digite a palavra: ");
    scanf("%s", palavra);
    int i;
    int val;
    val = strlen(palavra);
    int j=0;
    for ( i = val-1; i > -1; i--){
            palavrain[j] = palavra[i];
            j++;
    }
    palavrain[j]='\0';
    printf("%s\n", palavrain);
    if (strcmp(palavra,palavrain) == 0){
        printf("%s e um palindromo", palavra);
    }
    else{
		printf("Nao e uma palindromo");
	}
    return 0;
}