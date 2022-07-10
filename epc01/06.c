#include <stdio.h>
int main(int argc, char** argv){
	int num;
	printf("Digite o numero: ");
	scanf("%i", &num);
	if(num%3 == 0 || num%5 == 0){ //deixa passar qualquer numero seja ele divisivel por 3 ou 5
		if(num%3 == 0 && num%5 == 0){
			printf("Divisivel por 3 e por 5\n");
		}
		else{		
			if(num%3 == 0){
				printf("Divisivel por 3\n");
			}
			else{
				printf("Divisivel por 5\n");
			}
		}
	}
	else{ // se nao
		printf("Nao e divisivel por 3 nem por 5\n");
	}
	return 0;
}