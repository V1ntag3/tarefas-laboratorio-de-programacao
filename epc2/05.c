#include <stdio.h>

int main(int argc, char** argv)
{
	int *end_2;
	int *end_1;
	int valor=0;
	end_1 = &valor;
	end_2 = &valor;
	if(end_1>end_2){
		printf("Ponteiro end_1 tem o maior endereco\n");
		printf("%x", end_1);
	}
	else{
		printf("Ponteiro end_2 tem o maior endereco\n");
		printf("%x", end_2);
	}
	return 0;
}