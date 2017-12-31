//Bloque 1.4: operaciones con variables, macros

#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416 //Define la macro, cada vez que el codigo lea "PI", le asignara el valor 3.1416

int main(){
    float x;
    x = PI;
    printf("El valor de X es: %f.\n",x);
    system("sleep 1");
    return 0;

}
