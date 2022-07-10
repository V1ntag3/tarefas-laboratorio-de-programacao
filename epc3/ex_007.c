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
int main(int argc, char const *argv[]){
	char palavra1[30], palavra2[30];
    printf("Digite a primeira string: ");
    gets(palavra1);
    printf("Digite a segunda string: ");
    gets(palavra2);
    int cont=0;
    int i,h;
    int val1;
    int val2;
    val1 = strlen(palavra1);
    val2 = strlen(palavra2);    
    for(i=0;i<val1;i++){
    	int j=0;
    	for(h=i;h<=i+val2-1;h++){
    		if(palavra2[j]==palavra1[h]){
    			cont++; 		
			}
			j++;
		}
		if(cont == val2){
			printf("SUBSTRING");
			return 0;
		}
		cont=0;
	}
	printf("NAO SUBSTRING");
    return 0;
}
