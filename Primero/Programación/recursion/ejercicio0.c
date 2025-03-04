#include <stdlib.h>
#include <stdio.h>


/**
 *	Autor: Antonio Delgado Luque
 *	
 *	Fecha:
 *
 *	Título:
 */
int busqueda_binaria(int * array, int a_buscar,int ini, int fin);

int main() {

int array[10]={-5,1,9,10,11,12,17,120,150,1500};
int a_buscar=-5;
int encontrado= busqueda_binaria(array,a_buscar,0,9);
printf("%d\n",encontrado);
return 0;
}


int busqueda_binaria(int * array, int a_buscar,int ini, int fin){
int mitad=(ini+fin)/2;
    if (array[mitad]==a_buscar){return mitad;}
    if (ini > fin){return -1;}
    if (array[mitad]>a_buscar){return busqueda_binaria(array,a_buscar,ini,mitad -1);}
    else{return busqueda_binaria(array,a_buscar,mitad +1,fin);}
}
