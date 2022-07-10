#include <stdio.h>
int Absoluto(int n){
	if(n<0){
		return -n;
	}
	return n;
}
int main(int argc, char** argv){
	int x, y[5],i;
	for(i=0;i<5;i++){
		printf("Numero %d: ", i+1);
		scanf("%d", &x);
		y[i]= Absoluto(x);
	}
	printf("Numeros absolutos:\n");
	for (i=0;i<5;i++){
	printf("%d\n", y[i]);	
	}
	return 0;
}