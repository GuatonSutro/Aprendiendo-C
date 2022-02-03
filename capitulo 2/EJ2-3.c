#include <stdlib.h>
#include <stdio.h>

void main(){

char *a = "30 31 32 33 34 35 36 37 38 39";
char *token[2];
for (int i =0; a[i] != '\0';i++ ){
    if (a[i] == ' ')
    {
         printf("aqui puedo tomar valor");
        token[0] = a[i-2];
        token[1] = a[i-1];
        printf("\n\n\n %d %d \n\n",token[0],token[1]);
        continue;
    }
}




    return;
}