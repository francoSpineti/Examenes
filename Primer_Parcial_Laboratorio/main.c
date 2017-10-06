#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Pantalla.h"
#include "validar.h"
#include "Contratacion.h"

int main()
{
    Pantalla arrayPantalla[CANTIDAD_PANTALLAS];
    pantalla_inicializarArray(arrayPantalla,CANTIDAD_PANTALLAS);

  //  Contratacion arrayContratacion[CANTIDAD_CONTRATACION];
//    contratacion_inicializarArray(arrayContratacion,CANTIDAD_CONTRATACION);
    char bufferMenu[31];
    do
    {
        val_getMenu(bufferMenu,"\n1-Alta Pantalla\n2-Modificar datos de Pantalla\n3-Baja de Pantalla\n4-Contratar Publicidad\n5-Mostrar publicidad\n8-Salir\n","\nSolo 1,2,3,4,5\n",2,31);
        system("pause");
        switch(atoi(bufferMenu))
        {
        case 1:
            pantalla_altaPantalla(arrayPantalla,CANTIDAD_PANTALLAS);
            printf("\n Se creo una nueva pantalla");
            system("cls");

            break;

        case 2:
            pantalla_modificarPantalla(arrayPantalla,CANTIDAD_PANTALLAS);
            printf("\n No se encuentra el ID ingresado");
            system("cls");

            break;

        case 3:
            pantalla_bajaPantalla(arrayPantalla,CANTIDAD_PANTALLAS);
            printf("\n No se encuentra el ID ingresado");
            system("cls");

            break;

        case 4:
            pantalla_mostrarPantallasParaPublicidad(arrayPantalla,CANTIDAD_PANTALLAS);
//            contratacion_altaPublicidad(arrayContratacion,CANTIDAD_CONTRATACION);
            break;

        case 5:
           // contratacion_mostrarPublicidad(arrayContratacion,CANTIDAD_CONTRATACION);
            break;
        }

    }
    while( atoi(bufferMenu) != 8);

    return 0;
}
