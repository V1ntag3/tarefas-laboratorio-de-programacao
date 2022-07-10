#include <stdio.h>

int main(int argc, char** argv)
{
	int i;
	int numer=10;
	int num[11];
	for(i=0;i<=10;i++){
		num[i]=numer;
		numer++;
	}
	printf("Numeros pares de tras para frente\n");
	for(i=10;i>=0;i--){
		if(num[i]%2==0){
			printf("%d\n", num[i]);
		}
	}
	return 0;
}