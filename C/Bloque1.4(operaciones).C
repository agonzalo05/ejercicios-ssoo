//Bloque 1.4: operaciones con variables, operaciones matematicas

#include <stdio.h>
#include <stdlib.h>
#define N 2

int main(){

    int x;
    int y;
    x = N;

    printf("Introduce el valor para Y: ");
    scanf ("%i",&y);
    printf("El nuevo valor de Y es: %i \n",y);
    printf("El valor de X es : %i\n",x);

    x = x * y; //multiplica X * Y, y almacena el resultado en X, primero calcula y luego almacena, obviamente.

    printf("X e Y se han multiplicado, y su valor se ha almacenado en X, el resultado es: %i\n",x);

    x = x + y;

    printf("Ahora X con su nuevo valor se ha sumado a Y y se ha vuelto a almacenar en X, dando como resultado: %i\n",x);

    return 0;
}
