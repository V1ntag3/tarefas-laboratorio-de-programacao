/*
UFPI - Universidade Federal do Piauí
CCN - Ciência da Computação
Laboratório de Programação
Professor Helson
Aluno: Marcos Vinicius Ribeiro Alencar
*/
#include <stdio.h>
#include <stdlib.h>
int main( int argc, char *argv[ ] ){
	if(atoi(argv[1]) == atoi(argv[2]) && atoi(argv[3]) == atoi(argv[2]) ){
		printf("E equilatero");
	}
	else if(atoi(argv[1]) != atoi(argv[2]) && atoi(argv[3]) !=atoi(argv[2])&& atoi(argv[3])!= atoi(argv[1])){
		printf(	"E escaleno");
	
	}
	else{
		printf("E isoceles");
	}
  
  return 0;
}