#include <stdio.h>
#include <locale.h>
#define TAM 500

int temp;

void heapify(int arr[], int n, int i){
	int largest = i;
	int l = 2*i + 1;
	int r = 2*i + 2;
	
	if(l < n && arr[l] > arr[largest]){
		largest = l;
	}
	
	if(r < n && arr[r] > arr[largest]){
		largest = r;
	}
	
	if(largest != i){
		//swap(arr[i], arr[largest]);
		temp = arr[i];
		arr[i] = arr[largest];
		arr[largest] = temp;
		heapify(arr, n, largest);
	}
}

void heapSort(int arr[], int n){
	int i;
	
	for(i = n / 2 - 1; i >= 0; i --){
		heapify(arr, n, i);
	}
	
	for(i = n - 1; i >= 0; i--){
		//swap(arr[0], arr[i]);
		temp = arr[0];
		arr[0] = arr[i];
		arr[i] = temp;
		heapify(arr, i, 0);
	}
}

main()
{
	int i = 0;
	int vetor[TAM];
	setlocale(LC_ALL, "PORTUGUESE");
	
	for(i = 0; i < TAM; i++){
		scanf("%d", &vetor[i]);
	}
	
	heapSort(vetor, i);
	
	printf("Ordenado:\n");
	for(i = 0; i < TAM; i++){
		printf("%d ", vetor[i]);
	}
	printf("\n\n");
	
	system("PAUSE");
}
