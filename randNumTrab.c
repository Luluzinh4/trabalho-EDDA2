//26/08/18 18:22 -- Primeira versão utilizando o cmd para coletar (numeros500.txt)
#include <stdio.h>
#include <locale.h>
#include <time.h>
#define TAM 500

main()
{
	int i = 0;
	int x = 0;
	setlocale(LC_ALL, "PORTUGUESE");
	srand(time(NULL));
	
	for(i = 0; i < TAM; i++){
		x = rand() % 10000;
		printf("%d\n", x);
	}
	
	system("PAUSE");
}
