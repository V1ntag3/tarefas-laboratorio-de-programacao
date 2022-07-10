#include <stdio.h>

int main(int argc, char** argv)
{
	float semana[7],soma,media;
	int tem_m=0,i;
	printf("Digite as temperaturas diarias:\n");
	for(i=0;i<7;i++){
		scanf("%f", &semana[i]);
		soma= soma+ semana[i];
	}
	media = soma/7;
	for(i=0;i<7;i++){
		if(semana[i]>media){
			tem_m = tem_m+1;
			}
	}
	printf("Em %d as temperaturas foram maior que a media\n", tem_m);
	return 0;
}