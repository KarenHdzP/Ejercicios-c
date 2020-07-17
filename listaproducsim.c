//Lista simple productosy clientes
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Producto{
	int id;
	struct Producto *sig;
}TipoProducto;

typedef struct Cliente 
{
	int numcte;
	TipoProducto *CarritoProd;
	struct Cliente *sig;
}ClientePtr;
void insertarCliente(ClientePtr **iniCola,ClientePtr **finCola,TipoProducto *ListaProd,int num);

int main()
{
	int i=1;
	ClientePtr *iniCola,*finCola;
	iniCola=NULL;
	finCola=NULL;

	TipoProducto *ListaProd=NULL;
	
	insertarCliente(&iniCola,&finCola,ListaProd,i);
		i++;
	insertarCliente(&iniCola,&finCola,ListaProd,i);
	printf("folio cliente %d\n",iniCola->numcte);
	//printf("%d\n",iniCola->sig->numcte);


	return 0;
}
void insertarCliente(ClientePtr **iniCola,ClientePtr **finCola,TipoProducto *ListaProd,int num){
	ClientePtr *nuevo;
	nuevo=(ClientePtr*)malloc(sizeof(ClientePtr));
	if(nuevo==NULL)
		printf("No hay memoria\n");
	else{
		nuevo->numcte=num;
		nuevo->CarritoProd=NULL;
		nuevo->sig=NULL;
      //printf("%d",nuevo->numcte);
		if(*finCola!=NULL){
			(*iniCola)->sig=nuevo;
			(*finCola)=nuevo;
		}
		if (*iniCola==NULL)
			(*iniCola)=nuevo;
		     finCola=iniCola;
		}
	}
float ImpCliente(ClientePtr **iniCola,ClientePtr **finCola,int *num){
	ClientePtr *Pnodo;
	Pnodo=iniCola;
	if (!Pnodo)
		return 0;
    *iniCola=Pnodo->sig;
    *num=Pnodo->numC








}




