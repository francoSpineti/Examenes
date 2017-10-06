#ifndef PUBLICIDAD_H_INCLUDED
#define PUBLICIDAD_H_INCLUDED
typedef struct{
    int idContratacion;
   // int idPantalla;
    int cantidadDeDias;
    char nombreArchivo[50];
    int flag;
    int cuitCliente;
}Contratacion;
#endif // PUBLICIDAD_H_INCLUDED

#define CONTRATACION_LIBRE 0
#define CONTRATACION_OCUPADA 1
#define CANTIDAD_CONTRATACION 1000

int contratacion_inicializarArray(Contratacion* arrayContratacion,int longitud);

int contratacion_altaPublicidad(Contratacion* arrayContratacion,int longitud);

int contratacion_modificarPublicidad(Contratacion* arrayContratacion,int longitud);

int contratacion_bajaPublicidad(Contratacion* arrayContratacion,int longitud);

int contratacion_mostrarPublicidad(Contratacion* arrayContratacion, int longitud);
