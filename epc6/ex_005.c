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
	int i,j;
	int cont=0;
	char letra[20];
	char arq[20];
	char ch[20];
	printf("Digite o nome do arquivo e sua extensao: ");
	scanf("%s", arq);
	printf("Digite letra: ");
	fflush(stdin);
	gets(letra);
	FILE *fp;
	fp = fopen(arq,"r");
	if(fp == NULL){
		printf("Erro na abertura do arquivo!");
		return 1;
	}
	for(i=0;fgets(ch,1000,fp);i++){
		for(j=0;j<strlen(ch);j++){
			if(ch[j] == letra[0]){
				cont++;
			}
		}
			
	}
	printf("%i", cont);
	fclose(fp);
	return 0;
}