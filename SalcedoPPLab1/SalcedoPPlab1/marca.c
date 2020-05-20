#include "auto.h"
#include "color.h"






int cargarDescripcionMarca(char descripcion[],int id, eMarca marcas[],int tamM)
{

    int todoOk=0;

for(int i=0; i < tamM ; i++){

    if(marcas[i].id == id){

        strcpy(descripcion,marcas[i].descripcion);
        todoOk=1;

    }

}

return todoOk;

}






void mostrarMarcas(eMarca marcas[],int tamM)
{


    printf("\n\n***** Listado de Marcas *****\n");
    printf(" Id   | Marcas\n");
    printf("------------------\n");


    for(int i=0 ; i < tamM ;i++)
    {

        printf("  %4d  |  %-10s \n",marcas[i].id ,marcas[i].descripcion);


    }

}
