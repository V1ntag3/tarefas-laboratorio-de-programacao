#include <stdio.h>
int main(int argc, char** argv){
	int cont,n,contpri,pri,i;
	printf("Quantos numeros primos deseja ver no console? ");
	scanf("%i", &n);
	pri=2;
	for(contpri=0;contpri<n;){ //contador de numeros primos a serem imprimidos
		cont=0;	
		for(i=2;i<pri;i++){ // faz uma varredura no numero pri para saber se ele tem divisores
			if(pri%i == 0){
				cont = cont+1;
				}
			}
		if(cont==0){ // imprime o numero primo
			printf("%d e um numero primo\n", pri);
			contpri= contpri+1;
		}
		pri=pri+1;
		  }	
	return 0;
}