#include <stdio.h>
#include <locale.h>
#define TAM 8

main()
{
	int vetor[TAM];
	int i = 0;
	int j = 0;
	int temp = 0;
	setlocale(LC_ALL, "PORTUGUESE");
	
	for(i = 0; i < TAM; i++){
		printf("Digite um número: ");
		scanf("%d", &vetor[i]);
	}
	
	for(i = 1; i < TAM; i++){
		j = i;
		while(j > 0 && vetor[j - 1] > vetor[j]){
			temp = vetor[j - 1];
			vetor[j - 1] = vetor[j];
			vetor[j] = temp;
			j--;
		}
	}
	
	printf("\nOrdenado:\n");
	for(i = 0; i < TAM; i++){
		printf("%d\n", vetor[i]);
	}
	
	system("PAUSE");
}
