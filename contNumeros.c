#include <stdio.h>
#include <locale.h>
#define TAM 500

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
	
	printf("Contagem: %d\n", cont);
	
	system("PAUSE");
}
