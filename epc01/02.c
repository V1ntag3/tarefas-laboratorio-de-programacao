#include <stdio.h>
int main(){
	double resut,alt,lar;
	printf("Ola\nDigite aqui a altura da parede que deseja pintar: "); //altura
	while(scanf("%lf",&alt) !=1){
		scanf("%lf",&alt);
	};
	printf("Digite aqui a largura da parede que deseja pintar: ");// largura
	scanf("%lf",&lar);
	resut = (lar*alt * 0.3)/2; // calculo do numero de latas
	printf("Serao necessarias %.2lf latas\n", resut);
	return 0;
}