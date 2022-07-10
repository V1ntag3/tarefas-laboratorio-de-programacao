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
int main(int argc, char** argv){
	char ch [15];
	int i;
	FILE *fp;
	fp = fopen("arq.txt","w");
	if(fp == NULL){
		printf("Erro na abertura do arquivo!");
		return 1;
	}
	printf("Digite as palavras:\n");
	while(scanf("%s",ch) && strcmp(ch,"0") != 0){
		fprintf(fp,"%s\n",ch);
	}
	fclose(fp);
	fp = fopen("arq.txt","r");
	while(fgets(ch,15,fp)){
		for(i=0;i<strlen(ch);i++){
			printf("%c\n", ch[i]);
		}
	}
	fclose(fp);
	return 0;
}