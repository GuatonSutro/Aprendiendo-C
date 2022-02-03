#include <stdio.h>
#include <stdlib.h>

void main(){
    char a= 'a';
    char *xd = (char*)malloc(sizeof(char)*3);
    xd = "11";
    int *XD[2];
    int i=0;

    printf("%s",xd);
    printf("%c",xd[1]);
    printf("los numeros son %2d %2d",xd[0],xd[1]);
    printf("ke pasa");
        printf("ke pasa");

i = xd[1] - '0';
printf("ojo aca papi"); //al parecer puedo operar con variables tipo enteras pasandoles el valor de un char pero no viceversa???
printf("%2d %2d %2d",xd[0],xd[1], i);
return;
}