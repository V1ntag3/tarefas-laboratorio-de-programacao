#include <stdio.h>
void troca(int *num1, int *num2){
	int aux;
	aux = *num1;
	*num1 = *num2;
	*num2 = aux;
}

int main(int argc, char** argv)
{
	int num1,num2;
	printf("Primeiro numero: ");
	scanf("%d", &num1);
	printf("Segundo numero: ");
	scanf("%d", &num2);
	troca(&num1,&num2);
	printf("Numeros trocados:\n");
	printf("%d\n",num1);
	printf("%d\n",num2);

	return 0;
}