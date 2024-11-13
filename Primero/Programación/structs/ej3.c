#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *	Autor: Antonio Delgado Luque
 *	
 *	Fecha:
 *
 *	Título:
 */
#define MAX_ITEMS 20
typedef struct{

	char nombre[50];
	char direccion[100];
	char telefono[10];
}Proveedor;

typedef struct{

	char nombre[50];
	float precio;
	Proveedor proveedor;
}Articulo;

typedef struct{

	Articulo articulos[MAX_ITEMS];
	int cantidades[MAX_ITEMS];
	int totalArticulos;

}Inventario;




int main() {

Inventario miInventario;
strcpy(miInventario.articulos[0].nombre,"manzana");
miInventario.articulos[0].precio=2.6;
strcpy(miInventario.articulos[0].proveedor.nombre,"jose");
strcpy(miInventario.articulos[0].proveedor.direccion,"gran vía");
strcpy(miInventario.articulos[0].proveedor.telefono,"666284412");
miInventario.cantidades[0]=2;
miInventario.totalArticulos=1;

printf("nombre: %s\n",miInventario.articulos[0].nombre);
printf("precio: %f\n",miInventario.articulos[0].precio);
printf("proveedor: %s\n",miInventario.articulos[0].proveedor.nombre);
printf("direccion: %s\n",miInventario.articulos[0].proveedor.direccion);
printf("telefono: %s\n",miInventario.articulos[0].proveedor.telefono);
printf("cantidad: %d\n",miInventario.cantidades[0]);
printf("total de articulos: %d\n",miInventario.totalArticulos);

return 0;
}
