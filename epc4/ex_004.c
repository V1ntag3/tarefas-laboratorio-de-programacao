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
struct dados {
	char nome[20];
	float nota1, nota2, media;	
};
int main(int argc, char *argv[]){
	int quant = 10;
	int i;
	struct dados aluno[quant];
	FILE *fp;
	fp = fopen("ex_004.txt","w");
	if(fp == NULL){
		printf("Erro na abertura do arquivo!");
		return 1;
	}
	for(i=0;i<quant;i++){
		printf("Nome: ");
		scanf("%s", aluno[i].nome);
		printf("Nota 1: ");
		scanf("%f",&aluno[i].nota1);
		printf("Nota 2: ");
		scanf("%f",&aluno[i].nota2);
		aluno[i].media = (aluno[i].nota1+aluno[i].nota2)/2;
		printf("Media: %0.2f", aluno[i].media);
		fprintf(fp,"Aluno %d: %s\n",i+1,aluno[i].nome);
		fprintf(fp,"Nota 1:%.2f\n",aluno[i].nota1);
		fprintf(fp,"Nota 2:%.2f\n",aluno[i].nota2);
		fprintf(fp,"Media: %.2f\n",aluno[i].media);
	}
	return 0;
}