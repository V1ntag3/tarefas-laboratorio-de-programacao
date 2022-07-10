#include <stdio.h>
#include <math.h>
int main(int argc, char** argv)
{
	printf("Digite o numero: ");
	double num,result;
	scanf("%lf", &num);
	if(num<0){
		result = pow(num,2); //se numero for neg
	}
	else{
		result = sqrt(num); // se numero for pos
	}
	printf("Resultado: %.2lf\n", result);
	return 0;
}