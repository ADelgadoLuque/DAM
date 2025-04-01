#include <stdlib.h>
#include <stdio.h>


/**
 *	Autor: Antonio Delgado Luque
 *	
 *	Fecha:
 *
 *	Título:
 */


int suma_recursiva(int * arr, int n){

if (n==1)
{
    return arr[n-1];
}else{
    return arr[n-1]+suma_recursiva(arr,n-1);
}



}


int main() {
int arr[10]= {1,2,3,4,5,6,7,8,9,10};
printf("%d\n",suma_recursiva(arr,10));

return 0;
}
