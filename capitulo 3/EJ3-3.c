#include <stdlib.h>
#include <stdio.h>

void expandir(char s1[], char s2[]){

}
void main(){

char s1[] = "b-s";
char *s2;
int aux1 =0;
int aux2 =0;
int modo;
int longitudarreglo;
int j =0;

for (int i =0;s1[i] != '\0';i++){ //mientras no s1[i] no sea 0 básicamente.
    if (s1[i] >= 'a' && s1[i] <= 'z' && modo == 1){
        aux2 = s1[i];
    }
    else if (s1[i] >= 'a' && s1[i] <= 'z'){
        aux1 = s1[i];
    }
    if (s1[i] == '-'){
        modo =1;
    }
    
    if (aux1 != 0 && aux2 != 0){
        if (aux1 > aux2){
            longitudarreglo = (aux1-aux2)+1;
            s2 = (char*)malloc(sizeof(char)*longitudarreglo+1);
            while (aux2 <= aux1){
                s2[j] = aux2;
                j++;
                aux2++;
            }
        }
        else{
            longitudarreglo = (aux2-aux1)+1;
            s2 = (char*)malloc(sizeof(char)*longitudarreglo+1);
            while (aux1 <= aux2){
                s2[j] = aux1;
                j++;
                aux1++;
            }
        }
        
    }
}
s2[longitudarreglo] = 0;
printf("%s",s2);

}