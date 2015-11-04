#include <stdio.h>
#include "operacircular.h"

int main()
{
	struct nodo lista;
	int valor;
	int valor_antes;

	inicializar(&lista);
	printf("Programa en el cual tendras que insertar numeros en lista \n");
	printf("y termina cuando insertas un -1, y aparte insertaras un numero \n");
	printf("nuevo y podras insertarlo en el lugar que quieras de la lista. \n\n");
	while(valor != -1){
	printf("Escriba un numero \n");
	
		scanf("%d", &valor);
		if(valor != -1)
		insertar_al_final(&lista,valor);
	}
	printf("Escriba el nuevo numero a introducir\n");
	scanf("%d", &valor);
	printf("Despues de que numero de la lista quieres que este el numero nuevo\n");
	imprimir_lista(&lista);
	printf("\n");
	scanf("%d", &valor_antes);
	insertar_despues_de(&lista, valor, valor_antes);
	imprimir_lista(&lista);
	
	return 0;
}

    

