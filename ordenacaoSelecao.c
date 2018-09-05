#include <stdio.h>
#include <locale.h>
#define TAM 8

void posicMenVal(int numeros[]){
	int ind = 0;
	int i = 0;
	int j = 0;
	int temp = 0;
	
	for(i = 0; i < TAM - 1; i++){
		ind = i;
		for(j = i + 1; j < TAM; j++){
			if(numeros[ind] > numeros[j]){
				ind = j;
			}
		}
		temp = numeros[i];
		numeros[i] = numeros[ind];
		numeros[ind] = temp;
	}	
}

main()
{
	int vetor[TAM];
	int i = 0;
	int j = 0;
	int temp = 0;
	setlocale(LC_ALL, "PORTUGUESE");
	
	for (i = 0; i < TAM; i++){
		printf("Digite um número: ");
		scanf("%d", &vetor[i]);
	}
	
	posicMenVal(vetor);
	
	printf("\nOrdenado:\n");
	for(i = 0; i < TAM; i++){
		printf("%d\n", vetor[i]);
	}
	
	system("PAUSE");
}
