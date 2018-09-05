#include <stdio.h>
#include <locale.h>
#define TAM 10

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
	
	for(i = 0; i < TAM; i++){
		for(j = i + 1; j < TAM; j++){
			if(vetor[i] > vetor[j]){
				temp = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = temp;
			}
		}
	}
	
	printf("\nOrdenado:\n");
	for(i = 0; i < TAM; i++){
		printf("%d\n", vetor[i]);
	}
	
	system("PAUSE");
}
