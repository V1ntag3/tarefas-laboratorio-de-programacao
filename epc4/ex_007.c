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
#define MAX 1010
int main(int argc, char *argv[]){
	FILE *fp;
	fp = fopen("ex_007.txt","r");
	if(fp == NULL){
		printf("Erro na abertura do arquivo!");
		return 1;
	}
	int i;
	int x;
	int j;
	int op2;
	int op;
	int linha;
	int ini,fim;
	char fraseVetorOriginal[MAX][MAX];
	char frase[MAX];
	char frasevetor[MAX][MAX];
	char linhanv[MAX];
	printf("Menu:\n1 - Listar\n2 - Editar\n3 - Inserir\n4 - Apagar\n5 - Abandonar\n6 - Sair\n");
	for(x=0;fgets(fraseVetorOriginal[x], MAX, fp) != NULL;x++);
	fclose(fp);
	while(scanf("%i",&op) && op!=6){
		switch(op){
		case 1:
			fp = fopen("ex_007.txt","r");
			if(fp == NULL){
				printf("Erro na abertura do arquivo!");
				return 1;
			}
			printf("Indique a o intervalo de linhas que deseja listar:\n");
			printf("Inicio: ");
			scanf("%d",&ini);
			printf("Fim: ");
			scanf("%d",&fim);
			for(i=1;i<=fim;i++){
				fgets(frase,MAX,fp);
				if(i>=ini){
					printf("%s", frase);
				}
			}
			fclose(fp);
			break;
		case 2:
			fp = fopen("ex_007.txt","r");
			if(fp == NULL){
				printf("Erro na abertura do arquivo!");
				return 1;
			}
			printf("Indique a linha que deseja editar\n");
			printf("Linha: ");
			scanf("%d",&linha);
			printf("Digite o que deseja colocar na linha:\n");
			fflush(stdin);
			fgets(linhanv,MAX,stdin);
		    for(i=0;fgets(frasevetor[i], MAX, fp) != NULL;i++);
  			fclose(fp);
  			fp = fopen("ex_007.txt","w");
			if(fp == NULL){
				printf("Erro na abertura do arquivo!");
				return 1;
			}
  			linha=linha-1;
		    for(j=0;j<=i;j++){
				if(j!=linha){
					fprintf(fp,frasevetor[j]);
				}
				else{
					   fprintf(fp,linhanv);	
				}
			}
			fclose(fp);
			break;
		case 3:
			fp = fopen("ex_007.txt","r");
			if(fp == NULL){
				printf("Erro na abertura do arquivo!");
				return 1;
			}
			printf("Indique depois de qual linha que deseja adicionar uma nova\n");
			printf("Linha: ");
			scanf("%d",&linha);
			printf("Digite o que deseja colocar na linha:");
			fflush(stdin);
			fgets(linhanv,MAX,stdin);
		    for(i=0;fgets(frasevetor[i],MAX, fp) != NULL;i++);
  			fclose(fp);
  			fp = fopen("ex_007.txt","w");
			if(fp == NULL){
				printf("Erro na abertura do arquivo!");
				return 1;
			}
  			linha=linha-1;
		    for(j=0;j<=i;j++){
		    	
				if(j!=linha){
					fprintf(fp,frasevetor[j]);
				}
				else{
						fprintf(fp,frasevetor[j]);
					   fprintf(fp,linhanv);	
				}
			}
			fclose(fp);
			break;
		case 4:
			fp = fopen("ex_007.txt","r");
			if(fp == NULL){
				printf("Erro na abertura do arquivo!");
				return 1;
			}
			printf("Indique a linha que deseja apagar\n");
			printf("Linha: ");
			scanf("%d",&linha);
		    for(i=0;fgets(frasevetor[i], MAX, fp) != NULL;i++);
  			fclose(fp);
  			fp = fopen("ex_007.txt","w");
			if(fp == NULL){
				printf("Erro na abertura do arquivo!");
				return 1;
			}
  			linha=linha-1;
		    for(j=0;j<=x;j++){
				if(j!=linha){
					fprintf(fp,frasevetor[j]);
				}
			}
			fclose(fp);
			break;
		case 5:
			printf("Tem certeza que deseja abandonar as edicoes?\n");
			printf("1 - Sim\n2 - Nao\n");
			scanf("%d", &op2);
			if(op2 == 1){
				fp = fopen("ex_007.txt","w");
				if(fp == NULL){
					printf("Erro na abertura do arquivo!");
					return 1;
				}
				for(j=0;j<=i;j++){
					fprintf(fp,fraseVetorOriginal[j]);
				}
			}
			fclose(fp);
			
			break;
		case 6:
			break;
		default:
			printf("Opcao invalida\n");
			break;
		}
		printf("\nMenu:\n1 - Listar\n2 - Editar\n3 - Inserir\n4 - Apagar\n5 - Abandonar\n6 - Sair\n");
	}
	return 0;
}