#include <stdio.h>
int main(int argc, char** argv){
	int num[998],i;
	num[0] = 1001;
	for(i=1;i<998;i++){
		num[i]=num[i-1]+1;
		if(num[i]%11 == 5){ //condição que faz com que seja imprimido somento os numeros que dividido por 11 o resto é 5
			printf("O numero %d dividido por 11 tem resto 5\n", num[i]); 
		}
		
	}
	return 0;
}