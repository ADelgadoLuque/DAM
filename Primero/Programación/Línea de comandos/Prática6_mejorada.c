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
#define MAX_GENERO 20
/*--------------*/

/*ENUM DE LAS CATEGORÍAS DE LOS LIBROS*/
typedef enum{
	FICCION,
	NO_FICCION,
	POESIA,
	TEATRO,
	ENSAYO, 
	ERROR
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


char * EnumAString(genero Genero){
	switch(Genero){
	case FICCION: return "FICCION";
	case NO_FICCION: return "NO_FICCION";
	case POESIA: return "POESIA";
	case TEATRO: return "TEATRO";
	case ENSAYO: return "ENSAYO";
	default:return "ERROR";
	}
}
genero StringAEnum(char Genero[MAX_GENERO]){

	if(strcmp(Genero,"FICCION")==0) return FICCION ;
	else if(strcmp(Genero,"NO_FICCION")==0) return NO_FICCION ;
	else if(strcmp(Genero,"POESIA")==0) return POESIA ;
	else if(strcmp(Genero,"TEATRO")==0) return TEATRO ;
	else if(strcmp(Genero,"ENSAYO")==0) return ENSAYO ;
	else return ERROR;
}


//Como norma general paso por referencia ya que es más eficiente en términos de memoria aunque se podría pasar por valor los parámetros en todas las funciones menos la función "aumentarstock".
//Uso const ya que no quiero que se modifique por error ninguno de los Parámetros que recibe por referencia. Esto lo hago en todas menos en la función "aumentarstock".
Libro inicializarlibro(int ID,char * titulo, char * autor,float precio, genero genero,int stock,int *total_libros){

	Libro libro;

	libro.ID=ID;
	strcpy(libro.titulo,titulo);
	strcpy(libro.autor,autor);
	libro.precio=precio;
	libro.genero=genero;
	libro.stock=stock;

	*total_libros+=1;
	return(libro);
}
/*FUNCIÓN GENERAL PARA IMPRIMIR LOS DATOS DE LOS LIBROS*/
void imprimirlibro( const Libro * const catalogo){ 
	printf("ID: %d \nTítulo: %s \nAutor/es:  %s \nPrecio: %f \nGénero: %s \nStock: %d \n\n",(catalogo)->ID, (catalogo)->titulo, (catalogo)->autor, (catalogo)->precio, EnumAString(catalogo->genero), (catalogo)->stock);
																								//Utilizo flechas cuando necesito llamar al contenido de partes del struct. 
};
/*FUNCIÓN PARA MOSTRAR TODOS LOS LIBROS*/

void mostrarlibros(const Libro * const catalogo,const int * const total_libros){
	for (int i = 0; i < *total_libros; ++i){//El bucle recorre todo el Array de libros y los imprime.
		imprimirlibro(&catalogo[i]);
	};
};

/*FUNCIÓN PARA MOSTRAR EL LIBRO CORRESPONDIENTE CON EL ID INTRODUCIDO*/

//En el caso de ID_Libro no me preocupa ya que es una variable que contiene un entero así que la paso por valor en ver de referencia para evitar posibles problemas
void mostrarlibroid(int ID_Libro,const Libro * const catalogo,const int * const total_libros){
	if ((ID_Libro<0)|(ID_Libro>=*total_libros))//Compruebo que el id a buscar está dentro del máximo de libros
	{
		printf("Error\n");//si no lo está o se escribe algun carácter no numérico muestra error
	}else{
		imprimirlibro(&catalogo[ID_Libro]);//en este caso se imprime el libro correspondiente al ID introducido ya que no hay bucle como en el resto de los casos
	};
};
/*FUNCIÓN PARA AUMENTAR EL STOCK DE UN LIBRO*/

//En esta función es necesario pasar por referencia los datos esto debido a que si lo paso por valor la modificación no se aplica al array original. 
//También es necesario no usar const ya que vamos a modificar el stock del libro. 
//En el caso de ID_Libro y AumentarStock no me preocupa ya que es una variable que contiene un entero así que la paso por valor en ver de referencia para evitar posibles problemas
void aumentarstock(int ID_Libro,int AumentarStock,  Libro * const catalogo,int *total_libros){
	if ((ID_Libro<0)|(ID_Libro>=*total_libros)){//Compruebo que el id a buscar NO está dentro del máximo de libros

		printf("Error\n");//Si no lo está o se escribe algun carácter no numérico muestra error
	}else{

		printf("Stock previo: %d \n",(catalogo+ID_Libro)->stock);

	catalogo[ID_Libro].stock+=AumentarStock;//Se aumenta el stock del libro correspondiente al id introducido por la cantidad introducida
	
	printf("Stock actualizado: %d \n",(catalogo+ID_Libro)->stock);
	mostrarlibroid(ID_Libro,catalogo,total_libros);
};
};

/*MOSTRAR TODOS LOS LIBROS DE UNA CATEGORÍA*/
void mostrarlibroscategoria(const Libro * const catalogo,const genero Categoria_Buscar,const int * const total_libros){
	for (int i = 0; i < *total_libros; ++i){
		if (catalogo[i].genero==Categoria_Buscar)
		{
			imprimirlibro(&catalogo[i]);
		}
	};
	
};

/*MOSTRAR TODOS LOS LIBROS DE UN AUTOR*/

void mostrarlibrosautor(const char * const Autor_Buscar,const Libro * const catalogo,const int * const total_libros){
	/*Se compara el autor introducido con el string autor de cada libro, Se empieza con una comparación normal. Si son iguales imprime los datos del libro.
	 En caso contrario se vuelve a comparar pero esta vez el string del autor del libro que toque inicia un caracter después que en el anterior. 
	 Este ciclo se repite hasta que los strings coinciden o acaba el string*/
	int AutorOK;
	for (int i = 0; i < *total_libros; ++i){
		AutorOK=0;
		for (int j = 0; j < (MAX_AUTOR-(strlen(Autor_Buscar)-1)); ++j){

			if (strncmp(Autor_Buscar,catalogo[i].autor+j,(strlen(Autor_Buscar)-1))==0){ 
				AutorOK=1;
				break;
			};
		};
		if (AutorOK==1){		
			imprimirlibro(&catalogo[i]);

		};


	};
};

Libro anadirlibro(Libro * catalogo,int * total_libros){

	catalogo=(Libro *)realloc(catalogo,sizeof(Libro)*(*total_libros+1));
	int ID=*total_libros+1;
	char titulo[MAX_TITULO];
	char autor[MAX_AUTOR];
	float precio;
	int stock;
	char categoria[MAX_GENERO];

	printf("Título\n");
	fgets(titulo,MAX_TITULO,stdin);
	printf("Autor\n");
	fgets(autor,MAX_AUTOR,stdin);
	printf("Precio\n");
	scanf("%f",&precio);
	printf("Categoría\n");
	scanf("%s",categoria);
	printf("Stock\n");
	scanf("%d",&stock);

	Libro libro=inicializarlibro(ID,titulo,autor,precio,StringAEnum(categoria),stock,total_libros);
	return(libro);
}

int main(int argc, void ** argv) {

	int total_libros=0;
	Libro * catalogo=(Libro *)malloc(sizeof(Libro)*40);
	catalogo[0]=inicializarlibro(1, "To Kill a Mockingbird", "Harper Lee", 15.99, FICCION, 10,&total_libros);
	catalogo[1]=inicializarlibro(2, "1984", "George Orwell", 12.49, FICCION, 5,&total_libros);
	catalogo[2]=inicializarlibro(3, "The Great Gatsby", "F. Scott Fitzgerald", 10.99, FICCION, 8,&total_libros);
	catalogo[3]=inicializarlibro(4, "Moby Dick", "Herman Melville", 18.99, FICCION, 12,&total_libros);
	catalogo[4]=inicializarlibro(5, "War and Peace", "Leo Tolstoy", 20.00, FICCION, 7,&total_libros);
	catalogo[5]=inicializarlibro(6, "Pride and Prejudice", "Jane Austen", 14.99, FICCION, 9,&total_libros);
	catalogo[6]=inicializarlibro(7, "The Catcher in the Rye", "J.D. Salinger", 10.00, FICCION, 6,&total_libros);
	catalogo[7]=inicializarlibro(8, "The Odyssey", "Homer", 17.49, FICCION, 4,&total_libros);
	catalogo[8]=inicializarlibro(9, "Ulysses", "James Joyce", 25.00, FICCION, 2,&total_libros);
	catalogo[9]=inicializarlibro(10, "The Divine Comedy", "Dante Alighieri", 22.00, POESIA, 3,&total_libros);
	catalogo[10]=inicializarlibro(11, "Leaves of Grass", "Walt Whitman", 13.00, POESIA, 11,&total_libros);
	catalogo[11]=inicializarlibro(12, "The Iliad", "Homer", 18.50, FICCION, 7,&total_libros);
	catalogo[12]=inicializarlibro(13, "A Brief History of Time", "Stephen Hawking", 15.00, NO_FICCION, 15,&total_libros);
	catalogo[13]=inicializarlibro(14, "The Art of War", "Sun Tzu", 9.99, NO_FICCION, 20,&total_libros);
	catalogo[14]=inicializarlibro(15, "Sapiens: A Brief History of Humankind", "Yuval Noah Harari", 16.49, NO_FICCION, 13,&total_libros);
	catalogo[15]=inicializarlibro(16, "The Selfish Gene", "Richard Dawkins", 14.00, NO_FICCION, 6,&total_libros);
	catalogo[16]=inicializarlibro(17, "The Road to Serfdom", "F.A. Hayek", 10.50, NO_FICCION, 5,&total_libros);
	catalogo[17]=inicializarlibro(18, "The Wealth of Nations", "Adam Smith", 30.00, NO_FICCION, 8,&total_libros);
	catalogo[18]=inicializarlibro(19, "On the Origin of Species", "Charles Darwin", 24.99, NO_FICCION, 4,&total_libros);
	catalogo[19]=inicializarlibro(20, "The Prince", "Niccolò Machiavelli", 8.99, NO_FICCION, 14,&total_libros);
	catalogo[20]=inicializarlibro(21, "Hamlet", "William Shakespeare", 11.50, TEATRO, 6,&total_libros);
	catalogo[21]=inicializarlibro(22, "Macbeth", "William Shakespeare", 9.50, TEATRO, 8,&total_libros);
	catalogo[22]=inicializarlibro(23, "Othello", "William Shakespeare", 10.99, TEATRO, 7,&total_libros);
	catalogo[23]=inicializarlibro(24, "A Doll's House", "Henrik Ibsen", 12.50, TEATRO, 5,&total_libros);
	catalogo[24]=inicializarlibro(25, "Waiting for Godot", "Samuel Beckett", 13.99, TEATRO, 4,&total_libros);
	catalogo[25]=inicializarlibro(26, "Death of a Salesman", "Arthur Miller", 14.99, TEATRO, 10,&total_libros);
	catalogo[26]=inicializarlibro(27, "The Glass Menagerie", "Tennessee Williams", 11.00, TEATRO, 9,&total_libros);
	catalogo[27]=inicializarlibro(28, "Long Day's Journey into Night", "Eugene O'Neill", 19.50, TEATRO, 3,&total_libros);
	catalogo[28]=inicializarlibro(29, "The Importance of Being Earnest", "Oscar Wilde", 8.50, TEATRO, 15,&total_libros);
	catalogo[29]=inicializarlibro(30, "The Waste Land", "T.S. Eliot", 6.99, POESIA, 10,&total_libros);
	catalogo[30]=inicializarlibro(31, "Paradise Lost", "John Milton", 12.00, POESIA, 7,&total_libros);
	catalogo[31]=inicializarlibro(32, "Beowulf", "Anonymous", 15.00, POESIA, 5,&total_libros);
	catalogo[32]=inicializarlibro(33, "Essays", "Michel de Montaigne", 20.00, ENSAYO, 4,&total_libros);
	catalogo[33]=inicializarlibro(34, "Self-Reliance and Other Essays", "Ralph Waldo Emerson", 9.00, ENSAYO, 9,&total_libros);
	catalogo[34]=inicializarlibro(35, "Civil Disobedience and Other Essays", "Henry David Thoreau", 7.50, ENSAYO, 11,&total_libros);
	catalogo[35]=inicializarlibro(36, "Meditations", "Marcus Aurelius", 11.99, ENSAYO, 8,&total_libros);
	catalogo[36]=inicializarlibro(37, "The Federalist Papers", "Alexander Hamilton, James Madison, John Jay", 18.00, ENSAYO, 5,&total_libros);
	catalogo[37]=inicializarlibro(38, "The Communist Manifesto", "Karl Marx and Friedrich Engels", 5.99, ENSAYO, 12,&total_libros);
	catalogo[38]=inicializarlibro(39, "The Republic", "Plato", 16.00, ENSAYO, 6,&total_libros);
	catalogo[39]=inicializarlibro(40, "Thus Spoke Zarathustra", "Friedrich Nietzsche", 14.99, ENSAYO, 10,&total_libros);


/*
	if (argc==1)
	{
	//DEFINICIÓN DE VARIABLES
		int accion;
		int ID_Libro;
		int AumentarStock;
		char Categoria_Buscar[MAX_GENERO];
		char Autor_Buscar[MAX_AUTOR];
		do{//Switch case en un bucle do while para que el menú se ejecute después de cada acción hasta que el usuario seleccione 6 (Salir) 
			printf("Elige la acción: \n 1.Mostrar todos los libros. \n 2.Mostrar un libro por ID \n 3.Aumentar stock de un libro \n 4.Mostrar todos los libros de una categoría \n 5.Mostrar los libros de un autor \n 6.Añadir un libro \n 7.Salir\n ");

			scanf("%d",&accion);

			switch(accion){

			case 1:
				mostrarlibros(catalogo,&total_libros);
				break;

			case 2:

				printf("Introduce el ID a buscar: ");
				scanf("%d",&ID_Libro);
			mostrarlibroid(ID_Libro-1,catalogo,&total_libros);//Le resto 1 a ID_Libro ya que el array empieza en 0 pero el primer ID es el 1
			break;

		case 3:

			printf("Introduce el ID a aumentar el stock: ");
			scanf("%d",&ID_Libro);
			printf("Introduce la cantidad a añadir al stock: ");
			scanf("%d",&AumentarStock);
			aumentarstock(ID_Libro-1,AumentarStock,catalogo,&total_libros);//Le resto 1 a ID_Libro ya que el array empieza en 0 pero el primer ID es el 1
			break;

		case 4:

			printf("Introduce la categoría a mostrar: ");
			scanf("%s",Categoria_Buscar);
			mostrarlibroscategoria(catalogo,StringAEnum(Categoria_Buscar),&total_libros);
			break;

		case 5:
			printf("Introduce el nombre del autor a buscar: ");
			scanf(" ");//Este scanf está aquí para consumir el \n de seleccionar la acción y que funcione el fgets. QUITAR CON CUIDADO
			fgets(Autor_Buscar,MAX_AUTOR,stdin);//Recoge el nombre del autor con espacios para luego utilizarlo en la función
			mostrarlibrosautor(Autor_Buscar,catalogo,&total_libros);
			break;

		case 6:
			printf("Introduce los datos del libro a añadir: \n");
				char consumo;
	
				scanf("%c",&consumo); //consumo se encarga del \0 resultante de pulsar enter
			catalogo[total_libros]=anadirlibro(catalogo,&total_libros);
			break;

		default:
			printf("Error");//si no se introduce un número del 1 al 6 muestra error
		}
	}while(accion!=7);
	}								MENU
*/


	if (argc==2){
		
		if (strcmp(argv[1],"mostrar\0")==0){
			mostrarlibros(catalogo,&total_libros); //IMPRIMIR TODOS LOS LIBROS
		}else if (strcmp(argv[1],"añadir\0")==0){
			catalogo[total_libros]=anadirlibro(catalogo,&total_libros);
			mostrarlibros(catalogo,&total_libros);
		}

	}else if (argc==3){
		if (strcmp(argv[1],"mostrar\0")==0 && atoi(argv[2])<=total_libros ){
			mostrarlibroid(atoi(argv[2])-1,catalogo,&total_libros); //IMPRIMIR POR ID

		}else if (strcmp(argv[1],"categoria\0")==0 && StringAEnum(argv[2])!=ERROR){
																//compruebo que la categoría introducida corresponde con una de las presentes en el enum
			mostrarlibroscategoria(catalogo,StringAEnum(argv[2]),&total_libros); //Imprimir la categoria

		}else if (strcmp(argv[1],"autor\0")==0){
			mostrarlibrosautor((char *)argv[2],catalogo,&total_libros); //Imprimir por autor
		}
		
	}else if (argc==4){
		
		if (strcmp(argv[1],"stock\0")==0 && (argv[2]>0) && atoi(argv[3])>0) {
			aumentarstock(atoi(argv[2])-1,atoi(argv[3]),catalogo,&total_libros);
		}
	}else{
		printf("Error de sintaxis\n");
	}
	

	free(catalogo);
	return 0;
}