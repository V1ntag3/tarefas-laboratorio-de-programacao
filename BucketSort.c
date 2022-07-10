#include <stdio.h>
//Distribui os valores a serem ordenado em baldes. Cada balde tem uma faixa devalores
//Ordena os valores de cada balde com outro algoritmo de ordenação
//Percorre os baldes e coloca no array ordenado
#define TAM 5 // tamanho do balde que guarda os valores
struct balde{
	int qtd;
	int valores[TAM];
};
void BucketSort(int *V, int N){ //v é o vetor e n o tamanho dele
	int i,j,maior,menor,nroBaldes,pos;
	struct balde *bd;
//encontra maior e menor valor
	maior = menor = V[0]
	for(i=1;i<N;i++){
	if(V[i]>maior)
			{maior = V[i]};
	if(V[i]<menor)
		  {	menor = V[i]};
	}
//inicializa baldes
nroBaldes = (maior-menor)/TAM+1; // numero de baldes que serao alocados
bd = (struct balde *) malloc(nroBaldes * sizeof(struct balde));
for(i=0;i<nroBaldes;i++){
	bd[i].qtd=0;
}
//Distribui os valores nos baldes
for(i=0;i<N;i++){
	pos = (V[i]-menor)/TAM;
	bd[pos].valores[bd[pos].qtd]=V[i];
	bd[pos].qtd++;
}
//ordena baldes e coloca no array
pos=0;
for(i=0;i<nroBaldes;i++){
	insertionSort(bd[i].valores,bd[i].qtd);
	for(j=0;j<bd[i].valores[j];j++){
		V[pos] = bd[i].valores[j];
		pos++;
	}
	}
	free(bd);
}
int main(int argc, char** argv){	
	return 0;
}