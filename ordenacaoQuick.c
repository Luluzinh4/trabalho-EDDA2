#include <stdio.h>
#include <locale.h>
#define TAM 500

void quickSort(int vet[], int inicio, int fim){
	int pivo;
	int aux;
	int i = inicio;
	int j = fim;
	int meio;
	
	meio = (int) ((i + j) / 2);
	pivo = vet[meio];
	
	do{
		while(vet[i] < pivo){
			i++;
		}
		
		while(vet[j] > pivo){
			j--;
		}
		
		if(i <= j){
			aux = vet[i];
			vet[i] = vet[j];
			vet[j] =aux;
			i++;
			j--;
		}
	}while(j > i);
	
	if(inicio < j){
		quickSort(vet, inicio, j);
	}
	
	if(i < fim){
		quickSort(vet, i, fim);
	}
}

main()
{
	int i;
	int vetor[TAM];
	setlocale(LC_ALL, "PORTUGUESE");
	
	for(i = 0; i < TAM; i++){
		scanf("%d", &vetor[i]);
	}
	
	quickSort(vetor, 0, TAM - 1);
	
	printf("Ordenado:\n");
	for(i = 0; i < TAM; i++){
		printf("%d ", vetor[i]);
	}
	printf("\n\n");
	
	system("PAUSE");
}
