//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include "Contratacion.h"
//#include "validar.h"
//
////****************** FUNCIONES ESTATICAS ***********************************
//
//static int idAutoincrementable = 0;
//static int contratacion_generarIDAutoincrementable(Contratacion* arrayContratacion,int longitud);
//static int contratacion_buscarPosicionLibre(Contratacion* arrayContratacion,int longitud);
////static int contratacion_buscarIndicePorId(Contratacion* arrayContratacion,int longitud,int id);
//
///** \brief genera un Id que se va incrementando de a 1.
// *
// * @param longitud
// * @param arrayContratacion
// * @return retorna el id +1.
// */
//static int contratacion_generarIDAutoincrementable(Contratacion* arrayContratacion,int longitud)
//{
//    idAutoincrementable++;
//    return idAutoincrementable;
//}
//
/////** \brief funcion que retorna el indice del array por el ID, verifica si EXISTE O NO el indice.
//// *
//// * @param arrayContratacion
//// * @param longitud
//// * @param id
//// * @return
//// */
////static int contratacion_buscarIndicePorId(Contratacion* arrayContratacion,int longitud,int id)
////{
////    int i;
////    int retorno = -1;
////    if(arrayContratacion != NULL && longitud > 0 && id >= 0)
////    {
////        for(i=0; i < longitud ; i++)
////        {
////            if(arrayContratacion[i].flag == CONTRATACION_OCUPADA)
////            {
////                if(id == arrayContratacion[i].idContratacion)
////                {
////                    retorno = i;
////                    break;
////                }
////            }
////        }
////    }
////    return retorno;
////}
//
///** \brief me devuelve el index del primer item vacio de la array, la voy a usar para el alta, me retorna la posicion del array, si esta todo ocupado devuelve -1, si hay una posicion libre devuelve i.
// *
// * \param
// * \param longitud
// * \return
// *
// */
//static int contratacion_buscarPosicionLibre(Contratacion* arrayContratacion,int longitud)
//{
//    int retorno = -1;
//    int i;
//    if(arrayContratacion != NULL && longitud > 0)
//    {
//        for(i=0; i < longitud ; i++)
//        {
//            if(arrayContratacion[i].flag == CONTRATACION_LIBRE)
//            {
//                retorno =  i;
//                break;
//            }
//        }
//    }
//    return retorno;
//}
//
////**********************************************************     FIN FUNCIONES ESTATICAS    *******************************************************************************************
//
///** \brief  inicializamos el array, que todos los flags esten libres
// *
// * \param longitud - tamaño/longitud del  array
// * \param arrayContratacion
// * \return 0 = ok
// */
//int contratacion_inicializarArray(Contratacion* arrayContratacion,int longitud)
//{
//    int i;
//    for(i=0; i < longitud; i++)
//    {
//        arrayContratacion[i].flag = CONTRATACION_LIBRE;
//    }
//    return 0;
//}
//
///** \brief damos de alta una nueva publicidad
// *
// * @param longitud - longitud del array
// * @param arrayContratacion
// * @return 0 ok / -1 error
// */
//int contratacion_altaPublicidad(Contratacion* arrayContratacion,int longitud)
//{
//    int indexVacio = contratacion_buscarPosicionLibre(arrayContratacion,longitud);
//    int idNuevo;
//    int retorno = -1;
//    char bufferNombre[50];
//    char bufferCantidadDias[50];
//    char bufferCuit[50];
//
//    if(arrayContratacion != NULL && indexVacio >=0 && longitud > 0)
//    {
//        idNuevo = contratacion_generarIDAutoincrementable(arrayContratacion,longitud);
//
//        if(val_getCuit(bufferCuit,"Ingrese el cuit del Cliente: \n","ERROR: cuit no valido. \n",2,11)== 0)
//        {
//            if(val_getDias(bufferCantidadDias,"Ingrese los dias a contratar: \n","ERROR: dias no validos. \n",2,5)==0)
//            {
//                if(val_getNombreArchivo(bufferNombre,"Ingrese el nombre del Archivo: \n","ERROR: nombre invalido. \n",2,50)==0)
//                {
//                    arrayContratacion[indexVacio].flag = CONTRATACION_OCUPADA;
//                    arrayContratacion[indexVacio].idContratacion = idNuevo;
//                    strncpy(arrayContratacion[indexVacio].nombreArchivo,bufferNombre,50);
//                    arrayContratacion[indexVacio].cantidadDeDias = atoi(bufferCantidadDias);
//                    arrayContratacion[indexVacio].cuitCliente = atoi(bufferCuit);
//                    retorno = 0;
//                }
//            }
//        }
//
//    }
//    return retorno;
//}
//
///** \brief modifica al usuario. 1) Busco la posicion donde esta el ID, 2) Pido datos nuevos. 3) cargo en los campos.
// *
// * @param
// * @param
// * @return
// */
//int pantalla_modificarPantalla(PContratacion* arrayContratacion,int longitud)
//{
//    int index;
//    int retorno = -1;
//    char bufferID[50];
//    char bufferNombre[50];
//    char bufferDireccion[50];
//    char bufferPrecio[30];
//    char bufferTipo[4];
//
//    if(arrayPantalla != NULL && longitud > 0)
//    {
//        if(val_getID(bufferID,"Ingrese el ID de la Pantalla a Modificar: \n","ERROR : id no valido \n\n",2,31)== 0)
//        {
//            index = pantalla_buscarIndicePorId(arrayPantalla,longitud,atoi(bufferID));
//            if(index != -1)
//            {
//                if(val_getNombre(bufferNombre,"Ingrese Nombre de la Pantalla a modificar: \n","ERROR: Nombre no valido. \n \n",2,50)== 0)
//                {
//                    if(val_getDireccion(bufferDireccion,"Ingrese Direccion a modificar: \n","ERROR: Direccion no valida. \n \n",2,50)== 0)
//                    {
//                        if(val_getTipoPantalla(bufferTipo,"Ingrese Tipo de Pantalla (LCD o LED) a modificar: \n","ERROR: Tipo no valido. \n",2,4)== 0)
//                        {
//                            if(val_getPrecio(bufferPrecio,"Ingrese Precio a modificar: \n","ERROR: Precio no valido. \n",2,30)== 0)
//                            {
//                                arrayPantalla[index].flag = PANTALLA_OCUPADA;
//                                strncpy(arrayPantalla[index].nombre,bufferNombre,100);
//                                strncpy(arrayPantalla[index].direccion,bufferDireccion,31);
//                                strncpy(arrayPantalla[index].tipoPantalla,bufferTipo,100);
//                                arrayPantalla[index].precio = atof(bufferPrecio);
//                                retorno = 0;
//                            }
//                        }
//                    }
//                }
//            }
//        }
//    }
//    return retorno;
//}
//
//
/////** \brief da de baja una pantalla
//// *
//// * \param arrayPantalla
//// * \param longitud
//// * \return 0 ok / -1 error
//// */
////int pantalla_bajaPantalla(Contratacion* arrayContratacion,int longitud)
////{
////    int index;
////    int retorno = -1;
////    char bufferID[31];
////
////    if(arrayPantalla != NULL && longitud > 0)
////    {
////        if(val_getID(bufferID,"Ingrese el ID de la Pantalla a Eliminar: \n","ERROR : ID no valido \n\n",2,31)== 0)
////        {
////            index = pantalla_buscarIndicePorId(arrayPantalla,longitud,atoi(bufferID));
////            if(index != -1)
////            {
////                arrayPantalla[index].flag = PANTALLA_LIBRE;
////                retorno = 0;
////            }
////        }
////    }
////    return retorno;
////}
//
///** \brief muestra la lista de las pantallas cargados.
// *
// * @param arrayAsociado
// * @param longitud
// * @return -1 si da error la funcion / 0 si esta todo ok.
// */
//int contratacion_mostrarPublicidad(Contratacion* arrayContratacion, int longitud)
//{
//    int retorno = -1;
//    int i;
//    if(arrayContratacion != NULL && longitud > 0)
//    {
//        for(i=0; i < longitud ; i++)
//        {
//            if(arrayContratacion[i].flag == CONTRATACION_OCUPADA)
//            {
//                printf("\n \n \n ID Contratacion: %d \n - Nombre Archivo: %s \n - Cuit: %d \n - Dias: %d \n",arrayContratacion[i].idContratacion,arrayContratacion[i].nombreArchivo,arrayContratacion[i].cuitCliente,arrayContratacion[i].cantidadDeDias);
//                retorno = 0;
//            }
//        }
//    }
//    return retorno;
//}
//
//
