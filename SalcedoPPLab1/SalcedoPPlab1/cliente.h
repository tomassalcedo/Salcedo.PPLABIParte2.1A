#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED
typedef struct
{

    int id;
    char nombre[20];
    char sexo;



}eCliente;


#endif // CLIENTE_H_INCLUDED


void mostrarClientes(eCliente clientes[],int tamCli);

int cargarDescripcionCliente(char descripcion[],int id, eCliente clientes[],int tamCli);
