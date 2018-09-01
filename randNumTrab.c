//26/08/18 18:22 -- Primeira versão utilizando o cmd para coletar (numeros500.txt) -- Random de 10000 números
//01/09/18 12:05 -- Coletar números com cmd (numeros1000.txt) -- Random de 20000 números
//01/09/18 12:13 -- Coletando números por cmd (numeros1500.txt) (numeros2000.txt) (numeros2500.txt) -- Random de 50000 números
//01/09/18 12:20 -- Coletando números por prompt (numeros3000.txt) -- Random de 100000 números
#include <stdio.h>
#include <locale.h>
#include <time.h>
#define TAM 3000 //os valores 500, 1000, 1500, 2000, 2500 também foram utilizados

main()
{
	int i = 0;
	int x = 0;
	setlocale(LC_ALL, "PORTUGUESE");
	srand(time(NULL));
	
	for(i = 0; i < TAM; i++){
		x = rand() % 100000;
		printf("%d\n", x);
	}
	
	//system("PAUSE");
}
