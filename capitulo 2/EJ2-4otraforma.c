#include <stdlib.h>
#include <stdio.h>

void main(){

    char s[] = "me llamo jose";
    char e[] = "eos";
    char aux[20]; // todos los valores de esta cadena vienen con un int 0 por defecto
    // queremos comparar ambos string y eliminar de s todos los caracteres que salgan en t,

printf("%s %s %d",s,e,aux[18]);

for (int i =0;e[i] != '\0';i++){
    for (int j=0;s[j] != '\0';j++){
        if (s[j] == e[i]){
         s[j] = ' ';
        }
           
    }
}
printf("%s",s);

}