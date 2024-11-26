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

#define MAX_NOMBRE 20
#define MAX_ESTUDIANTES 20

typedef struct{
	char nombre[MAX_NOMBRE];
	int edad;
	float nota;

}estudiante;

void inicializar(estudiante * estudiante_a_rellenar, char * nombre, int edad, float nota ){
	strcpy(estudiante_a_rellenar->nombre,nombre);
	//estudiante_a_rellenar.nombre=nombre; No funciona ya que iguala las direcciones de memoria y no el contenido de la string
	estudiante_a_rellenar->edad=edad;
	estudiante_a_rellenar->nota=nota;
};
void cumpleanos(estudiante * cumpleanero){
		cumpleanero->edad++;
};
int main() {
	int num_estudiantes;
	int edad;
	float nota;
	char nombre[MAX_NOMBRE];

	estudiante listado[MAX_ESTUDIANTES];
	printf("¿Cuántos estudiantes desea inicializar? ");
	scanf("%d",&num_estudiantes);

	for(int i=0;i<num_estudiantes;i++){

		printf("edad: ");	
		scanf("%d",&edad);

		printf("nota: ");
		scanf("%f",&nota);

		printf("nombre: ");	
		scanf("%s",nombre);
		inicializar(listado+i,nombre,edad,nota);
		//inicializar(&listado[0],nombre,edad,nota); misma cosa
		printf("Edad de %s %d\n",listado[i].nombre,listado[i].edad);
		cumpleanos(&listado[i]);
		printf("Edad %s %d\n",listado[i].nombre,listado[i].edad);

		//printf("Edad %s %d\n",(listado+i)->nombre,listado[i].edad); Para apuntar a otra posicion que no sea la primera usando la flecha suma en paréntesis
		
		//			ASÍ NO [listado+i->nombre] ASÍ NO
	}
	return 0;
}
