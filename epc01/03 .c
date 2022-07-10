#include <stdio.h>
int main(int argc, char** argv)
{
	int hor,min,seg,total;
	printf("Quantas horas se passaram no cronometro? ");
	scanf("%d", &hor);
	printf("Quantas minutos se passaram no cronometro? ");
	scanf("%d", &min);
	printf("Quantas segundos se passaram no cronometro? ");
	scanf("%d", &seg);
	total = (hor*60*60)+(min*60)+seg;//total de segundos
	printf("Se passram %d segundos\n", total);
	
	return 0;
}