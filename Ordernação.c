#include <stdio.h>
int main(int argc, char** argv)
{
	int aux, tam, j, i, vet[10]={5, 3, 2, 4, 7, 1, 0, 6,8,1};
	tam = 10;
	j = 1;
	while (j <= tam-1){
		aux = vet[j];
		i = j - 1;
		while ((i >= 0) && aux < vet[i]){
			vet[i + 1] = vet[i];
			i = i - 1;
		}
		vet[i + 1] = aux;
		j = j + 1;
	}
	for(i = 0; i < 10; i++){
		printf("%i\n", vet[i]);
	}
	return 0;
}
