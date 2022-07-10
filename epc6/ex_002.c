/*
UFPI - Universidade Federal do Piauí
CCN - Ciência da Computação
Laboratório de Programação
Professor Helson
Aluno: Marcos Vinicius Ribeiro Alencar
*/
#include <stdio.h>
#include <string.h>
int main(int argc, char** argv){
	int i;
	printf("Digite o nome do arquivo e sua extensao: ");
	char arq[20];
	char ch[20];
	scanf("%s", arq);
	FILE *fp;
	fp = fopen(arq,"r");
	if(fp == NULL){
		printf("Erro na abertura do arquivo!");
		return 1;
	}
	for(i=0;fgets(ch,1000,fp);i++);
	printf("%i", i);
	fclose(fp);
	return 0;
}