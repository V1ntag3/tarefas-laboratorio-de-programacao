#include <stdio.h>
#include <math.h>
float distancia(float x1, float x2, float y1, float y2){
	float distancia;
	distancia = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	return distancia;
}
int main(int argc, char** argv){
	float x1,x2,y1,y2,dist;
printf("Digite os valores do x1 e y1:\n");
scanf("%f",&x1);
scanf("%f",&y1);
printf("Digite os valores do x2 e y2:\n");
scanf("%f",&x2);
scanf("%f",&y2);
dist= distancia(x1,x2,y1,y2);
printf("A distancia entre dois pontos é %.2f\n", dist);
	return 0;
}