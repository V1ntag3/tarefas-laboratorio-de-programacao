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
	int cont2=0;
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
	for(i=0;fgets(ch,1000,fp);i++){
		for(j=0;j<strlen(ch);j++){
			if(ch[j] == 'a' ||ch[j] == 'e' ||ch[j] == 'i' ||ch[j] == 'o' ||ch[j] == 'u'){
				cont++;
			}
			else{
				cont2++;
			}
		}
			
	}
	printf("%i\n", cont);
	printf("%i\n", cont2-i+1);
	fclose(fp);
	return 0;
}