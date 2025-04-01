#include <stdlib.h>
#include <stdio.h>


/**
 *	Autor: Antonio Delgado Luque
 *	
 *	Fecha:
 *
 *	Título:
 */

struct estudiante{

	char nombre[50];
	int edad;
	float promedio;
};
int main() {

struct estudiante alumno;
printf("Introduce el nombre del estudiante\n");
scanf("%s",alumno.nombre);
printf("Introduce la edad del estudiante\n");
scanf("%d",&alumno.edad);
printf("Introduce el promedio del estudiante\n");
scanf("%f",&alumno.promedio);


printf("Nombre del estudiante: %s\n",alumno.nombre);
printf("Edad del estudiante: %d\n",alumno.edad);
printf("Promedio del estudiante: %f\n",alumno.promedio);


return 0;
}
