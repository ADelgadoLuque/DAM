#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *	Autor: Antonio Delgado Luque
 *	
 *	Fecha inicio:27/11/2024
 *
 *	Título: Práctica 6: Gestión de biblioteca
 */
/*DEFINES*/
#define MAX_TITULO 80
#define MAX_AUTOR 50
#define MAX_LIBROS 40
/*--------------*/

/*ENUM DE LAS CATEGORÍAS DE LOS LIBROS*/
typedef enum{
	FICCION,
	NO_FICCION,
	POESIA,
	TEATRO,
	ENSAYO 
}genero;

/*struct de la información del libro*/
typedef struct{ 
	int ID;
	char titulo[MAX_TITULO];
	char autor[MAX_AUTOR];
	float precio;
	genero genero;
	int stock;
}Libro;


//Como norma general paso por referencia ya que es más eficiente en términos de memoria aunque se podría pasar por valor los parámetros en todas las funciones menos la función "aumentarstock".
//Uso const ya que no quiero que se modifique por error ninguno de los Parámetros que recibe por referencia. Esto lo hago en todas menos en la función "aumentarstock".

/*FUNCIÓN GENERAL PARA IMPRIMIR LOS DATOS DE LOS LIBROS*/
void imprimirlibro( const Libro * const datos){ 
	printf("ID: %d \nTítulo: %s \nAutor/es:  %s \nPrecio: %f \nGénero: %d \nStock: %d \n\n",(datos)->ID, (datos)->titulo, (datos)->autor, (datos)->precio, (datos)->genero, (datos)->stock);
																								//Utilizo flechas cuando necesito llamar al contenido de partes del struct. 
};
/*FUNCIÓN PARA MOSTRAR TODOS LOS LIBROS*/

void mostrarlibros(const Libro * const datos){
	for (int i = 0; i < MAX_LIBROS; ++i){//El bucle recorre todo el Array de libros y los imprime.
		imprimirlibro(&datos[i]);
	};
};

/*FUNCIÓN PARA MOSTRAR EL LIBRO CORRESPONDIENTE CON EL ID INTRODUCIDO*/

//En el caso de ID_Libro no me preocupa ya que es una variable que contiene un entero así que la paso por valor en ver de referencia para evitar posibles problemas
void mostrarlibroid(int ID_Libro,const Libro * const datos){
	if ((ID_Libro<0)|(ID_Libro>=MAX_LIBROS))//Compruebo que el id a buscar está dentro del máximo de libros
	{
		printf("Error\n");//si no lo está o se escribe algun carácter no numérico muestra error
	}else{
		imprimirlibro(&datos[ID_Libro]);//en este caso se imprime el libro correspondiente al ID introducido ya que no hay bucle como en el resto de los casos
	};
};
/*FUNCIÓN PARA AUMENTAR EL STOCK DE UN LIBRO*/

//En esta función es necesario pasar por referencia los datos esto debido a que si lo paso por valor la modificación no se aplica al array original. 
//También es necesario no usar const ya que vamos a modificar el stock del libro. 
//En el caso de ID_Libro y AumentarStock no me preocupa ya que es una variable que contiene un entero así que la paso por valor en ver de referencia para evitar posibles problemas
void aumentarstock(int ID_Libro,int AumentarStock,  Libro * const datos){
	if ((ID_Libro<0)|(ID_Libro>=MAX_LIBROS)){//Compruebo que el id a buscar NO está dentro del máximo de libros

		printf("Error\n");//Si no lo está o se escribe algun carácter no numérico muestra error
	}else{

		printf("Stock previo: %d \n",(datos+ID_Libro)->stock);

	datos[ID_Libro].stock+=AumentarStock;//Se aumenta el stock del libro correspondiente al id introducido por la cantidad introducida
	
	printf("Stock actualizado: %d \n",(datos+ID_Libro)->stock);

};
};

/*MOSTRAR TODOS LOS LIBROS DE UNA CATEGORÍA*/
void mostrarlibroscategoria(int Categoria_Buscar,const Libro * const datos){
	/*Cada caso está asignado a una categoría definida en el enum. 
	Como los datos del enum aunque con nombre propio (Ej. FICCION) realmente son numeros enteros de ahí que los "case" sean numeros enteros*/

	switch (Categoria_Buscar){

	case 0:
		for (int i = 0; i < MAX_LIBROS; ++i){
			if (Categoria_Buscar==datos[i].genero){//Aquí en vez de usar flechas uso punto"datos[i].genero" ya que es mas entendible que la alternativa con flechas "(datos+i)->genero".Esto lo aplico en todos los bucles
				imprimirlibro(&datos[i]);
			};
		};
		break;

	case 1:
		for (int i = 0; i < MAX_LIBROS; ++i){
			if (Categoria_Buscar==datos[i].genero){
				imprimirlibro(&datos[i]);
			};
		};
		break;

	case 2:
		for (int i = 0; i < MAX_LIBROS; ++i){
			if (Categoria_Buscar==datos[i].genero){
				imprimirlibro(&datos[i]);
			};
		};
		break;

	case 3:
		for (int i = 0; i < MAX_LIBROS; ++i){
			if (Categoria_Buscar==datos[i].genero){
				imprimirlibro(&datos[i]);
			};
		};
		break;

	case 4:
		for (int i = 0; i < MAX_LIBROS; ++i){
			if (Categoria_Buscar==datos[i].genero){
				imprimirlibro(&datos[i]);
			};
		};
		break;

	default:
		printf("Error\n"); //si no se introdujo un valor válido muestra error
	};
};

/*MOSTRAR TODOS LOS LIBROS DE UN AUTOR*/

void mostrarlibrosautor(const char * const Autor_Buscar,const Libro * const datos){
	/*Se compara el autor introducido con el string autor de cada libro, Se empieza con una comparación normal. Si son iguales imprime los datos del libro.
	 En caso contrario se vuelve a comparar pero esta vez el string del autor del libro que toque inicia un caracter después que en el anterior. 
	 Este ciclo se repite hasta que los strings coinciden o acaba el string*/
	int AutorOK;
	for (int i = 0; i < MAX_LIBROS; ++i){
		AutorOK=0;
		for (int j = 0; j < (MAX_AUTOR-(strlen(Autor_Buscar)-1)); ++j){

			if (strncmp(Autor_Buscar,datos[i].autor+j,(strlen(Autor_Buscar)-1))==0){ 
				AutorOK=1;
				break;
			};
		};
		if (AutorOK==1){		
				imprimirlibro(&datos[i]);

		};

	
	};
};


void main() {
/*DEFINICIÓN DE VARIABLES*/
	int accion;
	int ID_Libro;
	int AumentarStock;
	int Categoria_Buscar;
	char Autor_Buscar[MAX_AUTOR];

	Libro Libros[MAX_LIBROS] = {
		{1, "To Kill a Mockingbird", "Harper Lee", 15.99, FICCION, 10},
		{2, "1984", "George Orwell", 12.49, FICCION, 5},
		{3, "The Great Gatsby", "F. Scott Fitzgerald", 10.99, FICCION, 8},
		{4, "Moby Dick", "Herman Melville", 18.99, FICCION, 12},
		{5, "War and Peace", "Leo Tolstoy", 20.00, FICCION, 7},
		{6, "Pride and Prejudice", "Jane Austen", 14.99, FICCION, 9},
		{7, "The Catcher in the Rye", "J.D. Salinger", 10.00, FICCION, 6},
		{8, "The Odyssey", "Homer", 17.49, FICCION, 4},
		{9, "Ulysses", "James Joyce", 25.00, FICCION, 2},
		{10, "The Divine Comedy", "Dante Alighieri", 22.00, POESIA, 3},
		{11, "Leaves of Grass", "Walt Whitman", 13.00, POESIA, 11},
		{12, "The Iliad", "Homer", 18.50, FICCION, 7},
		{13, "A Brief History of Time", "Stephen Hawking", 15.00, NO_FICCION, 15},
		{14, "The Art of War", "Sun Tzu", 9.99, NO_FICCION, 20},
		{15, "Sapiens: A Brief History of Humankind", "Yuval Noah Harari", 16.49, NO_FICCION, 13},
		{16, "The Selfish Gene", "Richard Dawkins", 14.00, NO_FICCION, 6},
		{17, "The Road to Serfdom", "F.A. Hayek", 10.50, NO_FICCION, 5},
		{18, "The Wealth of Nations", "Adam Smith", 30.00, NO_FICCION, 8},
		{19, "On the Origin of Species", "Charles Darwin", 24.99, NO_FICCION, 4},
		{20, "The Prince", "Niccolò Machiavelli", 8.99, NO_FICCION, 14},
		{21, "Hamlet", "William Shakespeare", 11.50, TEATRO, 6},
		{22, "Macbeth", "William Shakespeare", 9.50, TEATRO, 8},
		{23, "Othello", "William Shakespeare", 10.99, TEATRO, 7},
		{24, "A Doll's House", "Henrik Ibsen", 12.50, TEATRO, 5},
		{25, "Waiting for Godot", "Samuel Beckett", 13.99, TEATRO, 4},
		{26, "Death of a Salesman", "Arthur Miller", 14.99, TEATRO, 10},
		{27, "The Glass Menagerie", "Tennessee Williams", 11.00, TEATRO, 9},
		{28, "Long Day's Journey into Night", "Eugene O'Neill", 19.50, TEATRO, 3},
		{29, "The Importance of Being Earnest", "Oscar Wilde", 8.50, TEATRO, 15},
		{30, "The Waste Land", "T.S. Eliot", 6.99, POESIA, 10},
		{31, "Paradise Lost", "John Milton", 12.00, POESIA, 7},
		{32, "Beowulf", "Anonymous", 15.00, POESIA, 5},
		{33, "Essays", "Michel de Montaigne", 20.00, ENSAYO, 4},
		{34, "Self-Reliance and Other Essays", "Ralph Waldo Emerson", 9.00, ENSAYO, 9},
		{35, "Civil Disobedience and Other Essays", "Henry David Thoreau", 7.50, ENSAYO, 11},
		{36, "Meditations", "Marcus Aurelius", 11.99, ENSAYO, 8},
		{37, "The Federalist Papers", "Alexander Hamilton, James Madison, John Jay", 18.00, ENSAYO, 5},
		{38, "The Communist Manifesto", "Karl Marx and Friedrich Engels", 5.99, ENSAYO, 12},
		{39, "The Republic", "Plato", 16.00, ENSAYO, 6},
		{40, "Thus Spoke Zarathustra", "Friedrich Nietzsche", 14.99, ENSAYO, 10}
	}; 

	do{//Switch case en un bucle do while para que el menú se ejecute después de cada acción hasta que el usuario seleccione 6 (Salir) 
		printf("Elige la acción: \n 1.Mostrar todos los libros. \n 2.Mostrar un libro por ID \n 3.Aumentar stock de un libro \n 4.Mostrar todos los libros de una categoría \n 5.Mostrar los libros de un autor \n 6.Salir\n");

		scanf("%d",&accion);

		switch(accion){

		case 1:
			mostrarlibros(Libros);
			break;

		case 2:

			printf("Introduce el ID a buscar: ");
			scanf("%d",&ID_Libro);
			mostrarlibroid(ID_Libro-1,Libros);//Le resto 1 a ID_Libro ya que el array empieza en 0 pero el primer ID es el 1
			break;

		case 3:

			printf("Introduce el ID a aumentar el stock: ");
			scanf("%d",&ID_Libro);
			printf("Introduce la cantidad a añadir al stock: ");
			scanf("%d",&AumentarStock);
			aumentarstock(ID_Libro-1,AumentarStock,Libros);//Le resto 1 a ID_Libro ya que el array empieza en 0 pero el primer ID es el 1
			break;

		case 4:

			printf("Introduce la categoría a mostrar:\n 0.FICCION\n 1.NO_FICCION\n 2.POESIA\n 3.TEATRO\n 4.ENSAYO\n ");
			scanf("%d",&Categoria_Buscar);
			mostrarlibroscategoria(Categoria_Buscar,Libros);
			break;

		case 5:
			printf("Introduce el nombre del autor a buscar: ");
			scanf(" ");//Este scanf está aquí para consumir el \n de seleccionar la acción y que funcione el fgets. QUITAR CON CUIDADO
			fgets(Autor_Buscar,MAX_AUTOR,stdin);//Recoge el nombre del autor con espacios para luego utilizarlo en la función
			mostrarlibrosautor(Autor_Buscar,Libros);
			break;

		case 6:
			accion=6;//sale del programa
			break;

		default:
			printf("Error");//si no se introduce un número del 1 al 6 muestra error
		}
	}while(accion!=6);
}