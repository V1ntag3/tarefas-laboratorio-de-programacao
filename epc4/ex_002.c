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
struct dados
{
	char codigo[20];
	char categoria[20];
	char nome[20];
};
int main(int argc, char** argv)
{
	int i;
	struct dados utente[1000];
	struct dados utente2[1000];
	char entrada[20];
	char saida[20];
	char tipo[123];
	int tam;
	int j;
	char aux0[1000], aux1[10000], aux2[1000];
	strcpy(entrada, argv[1]);
	strcpy(saida, argv[2]);
	strcpy(tipo, argv[3]);
	FILE *fp;
	fp = fopen(entrada, "r");
	if(fp == NULL){
		printf("Erro na abertura do arquivo!");
		return 1;
	}
	for(i = 0; fscanf(fp, "%s %s %s", utente[i].codigo, utente[i].categoria, utente[i].nome) && i < 6 ; i++);
	fclose(fp);
	fp = fopen(entrada, "r");

	for(i = 0; fscanf(fp, "%s  %s %s", utente2[i].codigo, utente2[i].categoria, utente2[i].nome) && i < 6 ; i++);
	fclose(fp);
	tam = i;
	if(strcmp(tipo, "codigo") == 0)
	{
		for (j=1; j <= tam - 1;j++){
			strcpy(aux0, utente2[j].codigo);
			strcpy(aux1, utente2[j].categoria);
			strcpy(aux2, utente2[j].nome);
			
			for(i = j - 1;(i >= 0) && strcmp(aux0, utente2[i].codigo) < 0;i--){
				strcpy(utente2[i + 1].codigo, utente2[i].codigo);
				strcpy(utente2[i + 1].categoria, utente2[i].categoria);
				strcpy(utente2[i + 1].nome, utente2[i].nome);
			}
			strcpy(utente2[i + 1].codigo, aux0);
			strcpy(utente2[i + 1].categoria, aux1);
			strcpy(utente2[i + 1].nome, aux2);
		}
	}
	else
	{							
		for (j=1; j <= tam - 1;j++){
			strcpy(aux0, utente2[j].codigo);
			strcpy(aux1, utente2[j].categoria);
			strcpy(aux2, utente2[j].nome);
			
			for(i = j - 1;(i >= 0) && strcmp(aux2, utente2[i].nome) < 0;i--){
				strcpy(utente2[i + 1].codigo, utente2[i].codigo);
				strcpy(utente2[i + 1].categoria, utente2[i].categoria);
				strcpy(utente2[i + 1].nome, utente2[i].nome);
			}
			strcpy(utente2[i + 1].codigo, aux0);
			strcpy(utente2[i + 1].categoria, aux1);
			strcpy(utente2[i + 1].nome, aux2);
		}
	}
	fp = fopen(saida, "w");
	if(fp == NULL){
		printf("Erro na abertura do arquivo!");
		return 1;
	}
	for(i = 0; fprintf(fp, "%s %s %s\n", utente2[i].codigo, utente2[i].categoria, utente2[i].nome) && i < tam ; i++);
	return 0;
}
