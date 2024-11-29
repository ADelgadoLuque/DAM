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
#define MAX_NOMBRE 50
#define MAX_ESTUDIANTES 20
#define MAX_BUFFER 200
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
void imprimiralumno(const estudiante * estudiante_a_imprimir ){
//const int* alumnoBloquea la modificación del CONTENIDO del puntero
//int * const alumno Bloquea la modificación del puntero(Dirección de memoria)
printf("Nombre: %s \n",estudiante_a_imprimir->nombre); 
printf("\tEdad: %d \n",estudiante_a_imprimir->edad);
printf("\tNota: %f \n",estudiante_a_imprimir->nota);

};


/*
char * estudianteToString_warning(const estudiante * Datos){
char retval[MAX_BUFFER];
//snprintf(dónde,cuánto,el qué[printf])
snprintf(retval,MAX_BUFFER,"El estudiante %s de %d años ha sacado un %f",Datos->nombre,Datos->edad,Datos->nota);
return retval;
};
*/
void * estudianteToString(const estudiante * Datos,char * retval){

//snprintf(dónde,cuántos caracteres,el qué[printf])
snprintf(retval,MAX_BUFFER*sizeof(retval),"El estudiante %s de %d años ha sacado un %f",Datos->nombre,Datos->edad,Datos->nota);
};
void CambiarNombreEstudiante(estudiante * datos){
printf("Cambio de nombre\n");
scanf("%s\n",datos->nombre);

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
imprimiralumno(&listado[i]);
//printf("Edad %s %d\n",(listado+i)->nombre,listado[i].edad); Para apuntar a otra posicion que no sea la primera usando la flecha suma en paréntesis
//			ASÍ NO [listado+i->nombre] ASÍ NO
char stringarellenar[MAX_BUFFER];		
estudianteToString(&listado[i],stringarellenar);
printf("%s\n",stringarellenar);

CambiarNombreEstudiante(&listado[i]);
printf("Nuevo nombre %s\n",listado[i].nombre);
};
return 0;
}
