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
	char num[20];
	fp = fopen("ex_003.txt","w");
	if(fp == NULL){
		printf("Erro na abertura do arquivo!");
		return 1;
	}
	int inteiro;
	while(scanf("%i",&inteiro) && inteiro != 0){
		fprintf(fp,"%d\n",inteiro);
	}
	fclose(fp);
	fp = fopen("ex_003.txt","r");
	if(fp == NULL){
		printf("Erro na abertura do arquivo!");
		return 1;
	}
	while(fscanf(fp,"%s", num) != EOF){
		printf("%s\n", num);
	}
	return 0;
}