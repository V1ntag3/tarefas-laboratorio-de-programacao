/*
UFPI - Universidade Federal do Piau�
CCN - Ci�ncia da Computa��o
Laborat�rio de Programa��o
Professor Helson
Aluno: Marcos Vinicius Ribeiro Alencar
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char const *argv[]){
    char senha[30] = "essaeminhasenha1234";
    char entrada[30];
    printf("Digite a senha: ");
    scanf("%s", entrada);
	
   if(strcmp(senha,entrada)==0){
	   printf("Senha valida");
   }
   else{
	   printf("senha invalida");
   }
    return 0;
}
