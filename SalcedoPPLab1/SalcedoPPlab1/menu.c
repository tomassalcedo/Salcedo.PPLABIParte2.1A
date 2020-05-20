#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"


int menu()
{

    char opcion;


    system("cls");
    printf("*****Gestion de Lavadero*****\n\n");

    printf("A. Alta Auto\n");
    printf("B. Modificar Auto\n");
    printf("C. Baja Auto\n");
    printf("D. Listar Autos\n");
    printf("E. Listar Marcas\n");
    printf("F. Listar Colores\n");
    printf("G. Listar Servicios\n");
    printf("H. Alta Trabajo\n");
    printf("I. Listar Trabajos\n");
    printf("J. Informes\n");
    printf("K. Salir\n\n");

    printf("Ingrese opcion: ");
    fflush(stdin);
    scanf("%c",&opcion);

    return opcion;

}



int menuMod()
{

    char opcion;

    system("cls");
    printf("*****Modificar Auto*****\n\n");
    printf("a_Modificar color\n");
    printf("b_Modificar modelo\n");
    printf("c_Salir\n\n");

    printf("Elija una opcion: ");
    fflush(stdin);
    scanf("%c",&opcion);


    return opcion;


}
