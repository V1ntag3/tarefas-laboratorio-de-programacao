/*
UFPI - Universidade Federal do Piauí
CCN - Ciência da Computação
Laboratório de Programação
Professor Helson
Aluno: Marcos Vinicius Ribeiro Alencar
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]){
	FILE *fp;
	fp = fopen("ex_006_entra.txt", "r");
	if(fp == NULL){
		printf("Erro na abertura do arquivo!");
		return 1;
	}
	FILE *fp2;
	fp2 = fopen("ex_006_saida.txt", "w");
	if(fp2 == NULL){
		printf("Erro na abertura do arquivo!");
		return 1;
	}
	char frase[1000];
	char frase2[1000];
	int tam;
	int i, j;
	while(fgets(frase, 1000, fp) != NULL){
		tam = strlen(frase);
		for(i = 0; i < tam; i++){
			if(frase[i] == '<'){
				frase[i] = ' ';
				for(j = i + 1; frase[j] != '>'; j++){
					frase[j] = ' ';
				}
				frase[j] = ' ';
			}
		}
		for(i = 0; i < tam; i++){
			if(frase[i] != ' '){
				j = 0;
				for(; i < tam; i++){
					frase2[j] = frase[i];
					j++;
				}
				frase2[j] = '\0';
				break;
			}
		}
		fputs(frase2, fp2);
	}
	fclose(fp);
	return 0;
}