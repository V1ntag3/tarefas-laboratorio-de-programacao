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
	int dia, mes, ano;
	char mess[20];
	dia = atoi(argv[1]);
	mes = atoi(argv[2]);
	ano = atoi(argv[3]);
// paremetro de entrada é:19 04 99	
	
	if(ano < 100){
		ano=ano +1900;
	}
	switch(mes){
		case 1:
			strcpy(mess,"Janeiro");
			break;
		case 2:
				strcpy(mess,"Fevereiro");
			break;
		case 3:
				strcpy(mess,"Março");
			break;
		case 4:
				strcpy(mess,"Abril");
			break;
		case 5:
				strcpy(mess,"Maio");
			break;
		case 6:
				strcpy(mess,"Junho");
			break;
		case 7:
				strcpy(mess,"Julho");
			break;
		case 8:
				strcpy(mess,"Agosto");
			break;
		case 9:
				strcpy(mess,"Setembro");
			break;
		case 10:
				strcpy(mess,"Outubro");
			break;
		case 11:
				strcpy(mess,"Novembro");
			break;
		case 12:
				strcpy(mess,"Dezembro");
			break;
	}
	printf("%i de %s de %i",dia,mess,ano);
	return 0;
}