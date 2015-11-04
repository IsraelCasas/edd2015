#include <stdio.h>
#include "operacircular.h"

int main ()
{
	struct nodo lista;
	int buscar;
	int valor = 1;
	inicializar(&lista);
	
	printf("Programa en el cual tendras que insertar numeros en lista \n");
	printf("y termina insertando un -1, en el cual de  la lista insertada \n");
	printf("tendras que borrar un numero de ella. \n\n");
	while(valor != -1){
	printf("Escriba un numero \n");
	
		scanf("%d", &valor);
		if(valor != -1)
		insertar_al_final(&lista,valor);
	}
	
	printf("escribe el numero a borrar de la siguiente lista\n");
	imprimir_lista(&lista);
	printf("\n");
	scanf("%d", &buscar);
	eliminar_nodo(&lista,buscar);
	imprimir_lista(&lista);
	borrar_lista(&lista);
	return 0;
}
