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
	int i;
	int val;
	char frase[100];
	gets(frase);
	val = strlen(frase);
	for(i=0; i < val;i++){
		if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u'){
			frase[i] = ' ';
		}
	}
	for(i=0;i<val/2;i++){
		printf("%c", frase[i]);
	}
    return 0;
}
