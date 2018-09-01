#include <stdio.h>
#include <locale.h>
#define TAM 3000 //500, 1000, 1500, 2000, 2500 também foram valores utilizados

main()
{
	int cont = 0;
	int aux = 0;
	int i = 0;
	setlocale(LC_ALL, "PORTUGUESE");
	
	for(i = 0; i < TAM; i++){
		scanf("%d", &aux);
		cont++;
	}
	
	printf("Último Número: %d\n", aux);
	printf("Contagem: %d\n", cont);
	
	//system("PAUSE");
}
