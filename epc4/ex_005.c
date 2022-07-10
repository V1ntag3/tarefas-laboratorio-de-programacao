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
	int i,j,strtam;
	char nome[102],vetor[1000][1000];
	int op;
	printf("1 - Criptografar\n2 - Descriptografar\n"); 
	scanf("%i", &op);
	if(op==1){
		FILE *fp;
		fp = fopen("ex_005_crip.txt","r");
		if(fp == NULL){
			printf("Erro na abertura do arquivo!");
			return 1;
		}
		for(i=0;fgets(nome,1000,fp) != NULL;i++){
			strcpy(vetor[i],nome);
		} 
		int tam = i;
		fclose(fp);
		fp = fopen("ex_005_cripsalva.txt","w");
		if(fp == NULL){
			printf("Erro na abertura do arquivo!");
			return 1;
		}
		for(i=0;i<tam-1;i++){
			strtam = strlen(vetor[i]);
			for(j=0;j<strtam-1;j++){
				vetor[i][j]=vetor[i][j]+1;
				fprintf(fp,"%c",vetor[i][j]);
			}		
			fprintf(fp,"\n");
		}
		strtam = strlen(vetor[i]);
		for(j=0;j<strtam;j++){
			vetor[i][j]=vetor[i][j]+1;
			fprintf(fp,"%c",vetor[i][j]);
		}	
		fclose(fp);
	}
	else{	
	FILE *fp;
	fp = fopen("ex_005_cripsalva.txt","r");
	if(fp == NULL){
		printf("Erro na abertura do arquivo!");
		return 1;
	}
	for(i=0;fgets(nome,1000,fp) != NULL;i++){
		strcpy(vetor[i],nome);
	}
	int tam = i;
	fclose(fp);
	FILE *fp2;
	fp2 = fopen("ex_005_descripsalva.txt","w");
	if(fp2 == NULL){
		printf("Erro na abertura do arquivo!");
		return 1;
	}
		for(i=0;i<tam;i++){
				strtam = strlen(vetor[i]);
				for(j=0;j<strtam;j++){
					vetor[i][j]=vetor[i][j]-1;
					fprintf(fp2,"%c",vetor[i][j]);
				}		
				fprintf(fp2,"\n");
			}
		fclose(fp2);
	}
	return 0;
}