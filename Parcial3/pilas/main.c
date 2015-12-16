#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"
#include "operaciones.h"

void menu(){
	printf("menu de \n");
	printf("1.- insertar(push)\n2.- borrar(pop)\n3.- mostrar(tope)\n4.- salir");
}
int main(){
	struct nodo *cabecera;
	int op,valor;
	cabecera = (struct nodo *) malloc(sizeof(struct nodo));
	inicializar(cabecera);
	do{
		menu();
		scanf("%d", &op);
		switch(op){
			case 1:
				printf("dame un numero: ");
				scanf("%d",&valor);
				push(cabecera,valor);
				break;
			case 2:
				pop(cabecera);
				break;
			case 3:
				tope(cabecera);
				break;
			case 4:
				break;
			default:
				break;
		}
	}
while(op != 4);
	borrar_lista(cabecera);
	return 0;
	}
