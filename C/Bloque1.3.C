//Bloque 1.3: Variables.
#include <stdio.h>
#include <stdlib.h>
int main (){

    int x;//variable para numeros enteros, sin decimales, limite 16 bits
    float y;//Variable para numeros flotantes, con decimales, limite 32 bits
    double y2;//variable para numeros flotantes, con decimales, limite 64 bits
    char z;//variable para caracteres, puede almacenar numeros, pero los trata como caracteres ascii, solo 1 caracter

    x = 5;
    y = 7.3;
    y2 = 98.64;
    z = 'P';

    printf ("Valor de X: %i.\n",x ); // lo de %i, indica el tipo de variable que es, siendo %i para enteros, %f para float y decimales y %char para caracteres.
    printf ("Valor de Y: %f.\n",y );
    printf ("Valor de Y2: %f.\n",y2 );
    printf ("Valor de Z: %c.\n",z );

    printf ("Valores de Y, Y2 y Z: %f %f %c.\n",y,y2,z);// el espacio le cuenta entre las comillas, es decir, si quieres espacios entre variables, lo pondras en el tanto por ciento, dentro de las comillas.

    system ("sleep 1");
    return 0;

}
