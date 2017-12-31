//Hola mundo

#include <stdio.h>
#include<stdlib.h>

int main (){

	printf("\n Hola mundo\n\n\n");
    printf("Pulsa ^C o espera 10 segundos para continuar.");
    system ("pause");
    return 0;
}

//funcion pause (no funciona de momento)

void pausa(){

    #ifdef _WIN32

    system("pause");

    #endif

    #ifdef linux

    printf("\nPulse ENTER para volver... \n");
    while(getchar()!='\n');
    while(getchar() !='\n');

    #endif // linux

    }
