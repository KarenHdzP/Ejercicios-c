#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct DatosProd{
	int id;
	char nombre[20];
	float precioC;
	float precioV;
	int cant;
	struct DatosProd *sig;
}TipoDProducto;

typedef struct Producto
{
	TipoDProducto *produc;
	struct Producto *sig;
}TipoProducto;

typedef struct Cliente
{
	int numC;
	TipoProducto *carritoProd;
	float efec;
	float Total;
	struct Cliente *sig;
}TipoCliente;
void MenuClientes(TipoCliente *iniCola,TipoCliente *finCola,TipoProducto *PilaT,TipoDProducto *Listatemp);//Menu Clientes
void pushCarrito(TipoProducto **PilaT,TipoDProducto *Listatemp);
void insertarCliente(TipoCliente **iniCola,TipoCliente **finCola,TipoDProducto *ListaProd,int num);
void GuardarElemC(TipoCliente *cola) ;
void ImpCliente(TipoCliente *iniCola);
void EliCliente(TipoCliente **iniCola,TipoCliente **finCola,float *num);
int main(){
	TipoDProducto *Listat=NULL;
	TipoCliente *ColaI=NULL;
	TipoCliente *ColaF=NULL;
	TipoProducto *PilaT=NULL;
	int op;
	do{
		printf("\t\tSuper Mercado\n" );
		printf("\tMENU\n");
		printf("\t1.-Inventario\n\t2.-Clientes\n\t3.-Salir\n");
		scanf("%d",&op);
		while(op<1||op>3){
			printf("\tOpcion invalida  \n");
			scanf("%d",&op);
		}
		switch(op){
			case 1:
			MenuInventario(Listat);
			break;
			case 2:
			MenuClientes(ColaI,ColaF,PilaT,Listat);break;
			case 3:
			exit (0);break;
		}
	}
	while(op!=3);
	return 0;
}
void MenuClientes(TipoCliente *iniCola,TipoCliente *finCola,TipoProducto *PilaT,TipoDProducto *ListaP){
	int op,id,cantidad,busq;
	int i=1;
	float preV,preC,Total=0,efectivo=0;
	float aux;
	char nom[100];	
	do{
		printf("\t\tSuper Mercado\n" );printf("\tMenu Clientes\n");
		printf("\t1.-Ingresar Clientes y Productos al carrito\n\t2.-Eliminar Productos al carrito\n\t3.-Pagar\n\t4.-Salir\n");
		scanf("%d",&op);
		while(op<1||op>4){
			printf("\tOpcion invalida  \n");
			scanf("%d",&op);
		}
		switch(op){
			case 1:
			printf("\t\tIngresar Cliente y Productos al Carrito\n");
			//printf("Folio del Cliente No.%d\n",i++);
			//printf("Ingrese el Id del Producto\n");
			//scanf("%d",&id);
			insertarCliente(&iniCola,&finCola,ListaP,i++);
			ImpCliente(iniCola);
			
			//busq=Buscar();
			break;
			case 2:
			printf("Eliminar Productos del Carrito\n");
			break;
			case 3:

			printf("Pagar\n" );
			EliCliente(&iniCola,&finCola,&aux);
			break;
			case 4:
			GuardarElemC(iniCola);
			system ("cls");
			break;
			
		}
	}
	while(op!=4);
	
}

void pushCarrito(TipoProducto **PilaT,TipoDProducto *Listatemp){
	TipoProducto *nuevo;
	nuevo=(TipoProducto*)malloc(sizeof(TipoProducto));
	if (nuevo==NULL)
		printf("No hay memoroia\n");
	else{
		nuevo->produc=Listatemp;
		nuevo->sig=*PilaT;
		*PilaT=nuevo;
		printf("Ingresado con exito\n");
	}
}

void insertarCliente(TipoCliente **iniCola,TipoCliente **finCola,TipoDProducto *ListaProd,int num){
	TipoCliente *nuevo;
	nuevo=(TipoCliente*)malloc(sizeof(TipoCliente));
	if(nuevo==NULL)
		printf("No hay memoria\n");
	else{
		nuevo->numC=num;
		nuevo->carritoProd=NULL;
		nuevo->sig=NULL;
      //printf("%d",nuevo->numcte);
		if(*finCola!=NULL){
			(*iniCola)->sig=nuevo;
			(*finCola)=nuevo;
		}
		if (*iniCola==NULL){
			(*iniCola)=nuevo;
		}
		printf("Cliente Insertado\n");
	}
}
void GuardarElemC(TipoCliente *cola)    /*Guarda en Clientes.txt*/
{
	TipoCliente *temp;
	temp=(cola);
	FILE *Destino;
	Destino=fopen("Clientes.txt","w");
	if(Destino==NULL){
		printf("El archivo no se puede abrir\n"); 
	}
	else{
		while((temp)!=NULL){
			fprintf(Destino, "%d\n",(temp)->numC);
			//fprintf(Destino, "%s\n",(temp)->);
			fprintf(Destino, "%.2f\n",(temp)->efec);
			fprintf(Destino, "%.2f\n",(temp)->Total);
			(temp)=(temp)->sig;

		}
		fclose(Destino);
	}
}
void EliCliente(TipoCliente **iniCola,TipoCliente **finCola,float *num){
	TipoCliente *Pnodo;
	Pnodo=*iniCola;
	if (!Pnodo)
		printf("No hay Clientes\n");
	*iniCola=Pnodo->sig;
	*num=Pnodo->Total;
	printf("Cliente Eliminado\n");
	Pnodo=NULL;
	if(*iniCola==NULL){
		*finCola=NULL;
	printf("No hay Clientes\n");
 }
}
void ImpCliente(TipoCliente *iniCola){
	TipoCliente *Pnodo;
	Pnodo=iniCola;
	if (!Pnodo)
		printf("No hay Clientes\n");
	else{
	Pnodo=Pnodo->sig;
	printf("Cliente No.%d\n",Pnodo->numC);	
 }
}


