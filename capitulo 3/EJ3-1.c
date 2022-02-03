#include <stdio.h>
#include <stdlib.h>

// primero que todo copiamos la búsqueda binaria definida por el libro.
enum numeros {cero,uno,dos,tres,cuatro,cinco,seis,siete,ocho,nueve};
int binsearch(int x,int v[],int n){
    int low, high, mid;
    low=0;
    high = n-1;
    while ( low <= high){
        mid= (low+high) /2; //como son int se truncan siempre al más bajo
        if (x < v[mid])
            high = mid-1; //si x es menor que el valor que está en la mitad del arreglo el más alto es la mitad del arreglo -1
        else if (x > v[mid])
            low = mid+1; //lo mismo de arriba pero viceversa
        else
            return mid; //se encontró el valor buscado
    }
    return -1;
}

void main(){

int arreglo[10];
for (int i =0;i < 10;i++)
    arreglo[i] = i;

printf("%d",binsearch(11,arreglo,10));
    

}