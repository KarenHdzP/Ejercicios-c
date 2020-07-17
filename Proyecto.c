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

void Eliminar(TipoDProducto **ListaT,int id);//Eliminar Producto
void Alta(TipoDProducto **Listatemp,int id,char nom[],float preV,float preC,int cantidad);//Alta de Producto
void Imprimir(TipoDProducto *ListaT);//Imprimir un producto
int Buscar(TipoDProducto *Listat,int num);//Buscar un producto
void Modificar(TipoDProducto **Listat);//Modificar productos
void AbrirEle(TipoDProducto **ListaT);
void GuardarElem(TipoDProducto *ListaT);
void GuardarElemC(TipoCliente *cola) ;
void MenuClientes(TipoCliente *iniCola,TipoCliente *finCola,TipoProducto *PilaT,TipoDProducto *Listatemp);//Menu Clientes
void MenuInventario(TipoDProducto *Listat);
void pushCarrito(TipoProducto **PilaT,TipoDProducto *Listatemp);
void insertarCliente(TipoCliente **iniCola,TipoCliente **finCola,TipoDProducto *ListaProd,int num);
void EliCliente(TipoCliente **iniCola,TipoCliente **finCola,float *num);
void ImpCliente(TipoCliente *iniCola);

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
void Alta(TipoDProducto **Listatemp,int id,char nom[],float preV,float preC,int cantidad)//Inserta productos a la lista
{
	TipoDProducto *nuevo,*ant,*act;
	nuevo=(TipoDProducto *)malloc(sizeof(TipoDProducto));
	if(nuevo==NULL)
		printf("No hay memoria\n");
	else{
		nuevo->id=id;
		strcpy(nuevo->nombre,nom);
		nuevo->precioC=preC;
		nuevo->precioV=preV;
		nuevo->cant=cantidad;
		nuevo->sig=NULL;
	}

	if(*Listatemp==NULL)
		*Listatemp=nuevo;
	else{
		ant=NULL;
		act=*Listatemp;

		while(act!=NULL && nuevo->id> act->id){
			ant=act;
			act=act->sig;
		}
		if(ant==NULL){
			nuevo->sig=*Listatemp;
			*Listatemp=nuevo;
		}
		else{
			ant->sig=nuevo;
			nuevo->sig=act;
		}
	}
}
void Imprimir(TipoDProducto *ListaT)//Imprime Productos de la lista
{
	TipoDProducto *temp;
	temp=ListaT;
	if(ListaT==NULL)
		printf("No hay Elementos\n");
	else{
		while(temp){
			printf("Id :%d\n",temp->id);
			printf("Nombre:%s\n",temp->nombre);
			printf("Precio Venta:$%.2f\n",temp->precioV);
			printf("Precio Compra:$%.2f\n",temp->precioC);
			printf("Cantidad:%d\n",temp->cant);
			temp=temp->sig;
		}
	}
}
void Eliminar(TipoDProducto **ListaT,int id)//Elimina productos
{
	TipoDProducto *temp,*ant,*act;
	if((*ListaT)->id==id){
		temp=*ListaT;
		*ListaT=temp->sig;
		free(temp);
		printf("Dato Eliminado\n");    
	}
	else{
		ant=*ListaT;
		act=ant->sig;

		while(act!=NULL && act->id!=id){
			ant=act;
			act=act->sig;
		}
		if(act!=NULL){
			temp=act;
			ant->sig=act->sig;
			free(temp);
			printf("Elemento Eliminado\n");  
		}
		else
			printf("No hay Elementos en la Lista\n");
	}
}
void Modificar(TipoDProducto **Listat)//Modifica Productos
{
	TipoDProducto *temp=NULL;
	int op,num;
	if((*Listat)!=NULL){
		printf("Ingrese el Id del producto\n");
		scanf("%d",&num);
		temp=(*Listat);
		if (Buscar(temp,num)!=0){	
			printf("Que Elemento deseas modificar\n");
			printf("\t1.-Id\n\t2.-Nombre\n\t3.-PrecioC\n\t4.-PrecioV\n\t5.-Cantidad\n\t6.-Salir\n");
			scanf("%d",&op);
			while(op<1 || op>6){
				printf("Opcion invalida\n \tOpcion  ");
				scanf("%d",&op);
			}
			switch(op){
				case 1:
				int aux1;
				printf("Ingresa el nuevo Id\n");
				scanf("%d",&aux1);
				(*Listat)->id=aux1;
				break;
				case 2:
				char aux2[20];
				printf("Ingresa el nuevo Nombre ingresando solo una palabra\n");
				scanf("%s",aux2);
				strcpy((*Listat)->nombre,aux2);
				break;
				case 3:
				float aux3;
				printf("Ingresa el nuevo Precio de Compra\n");
				scanf("%d",&aux3);
				(*Listat)->precioC=aux3;
				break;
				case 4:
				float aux4;
				printf("Ingresa el nuevo Precio de Venta\n");
				scanf("%d",&aux4);
				(*Listat)->precioV=aux4;
				break;
				case 5:
				int aux5;
				printf("Ingresa la nueva cantidad \n");
				scanf("%d",&aux5);
				(*Listat)->cant=aux5;
				break;
			}
		}
		else
			printf("No Esta el Elemento\n");
	}
	else
		printf("Lista vacia\n");
}
int Buscar(TipoDProducto *Listat,int num)	//Busca Productos  los anteriores son de (TipoDProductos)
{
	if(Listat!=NULL){
		if(Listat->id==num)
			return 1;	
		else{
			Buscar(Listat->sig,num);
		}
	}
	else
		return 0;
}
void AbrirEle(TipoDProducto **ListaT){//falta
	FILE *nuevo;
	nuevo=fopen("Inventario.txt","r");
	if(nuevo==NULL)
		printf("No se puede abrir el archivo\n");
	else
	{
		while(1){
		fscanf(nuevo,"%d",(*ListaT)->id);
		fscanf(nuevo,"%s",(*ListaT)->nombre);
		fscanf(nuevo,"%f",(*ListaT)->precioC);
        fscanf(nuevo,"%f",(*ListaT)->precioV);
        fscanf(nuevo,"%d",(*ListaT)->cant);
		if(feof(nuevo))
			break;
		printf("%d\n",(*ListaT)->id);


		fclose(nuevo);
	}
  }
}
void GuardarElem(TipoDProducto *ListaT)//Guarda en archivo Inventario.txt
{
	TipoDProducto *temp;
	temp=(ListaT);
	FILE *Destino;
	Destino=fopen("Inventario.txt","w+");
	if(Destino==NULL){
		printf("El archivo no se puede abrir\n"); 
	}
	else{
		while((temp)!=NULL){
			fprintf(Destino, "%d ",(temp)->id);
			fprintf(Destino, "%s ",(temp)->nombre);
			fprintf(Destino, "%.1f ",(temp)->precioC);
			fprintf(Destino, "%.1f ",(temp)->precioV);
			fprintf(Destino, "%d ",(temp)->cant);
			(temp)=(temp)->sig;

		}
		fclose(Destino);
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
void MenuInventario(TipoDProducto *Listat)//Menu inventario
{ 
	int op,id,cantidad;
	float preV,preC;
	char nom[100];
	printf("\t\tSuper Mercado\n" );printf("\tInventario de productos\n");
	do{
		printf("\t1.-Alta de productos\n\t2.-Eliminar Producto\n\t3.-Modificar\n\t4.-Lista de Producto\n\t5.-Guardar Registros a un archivo\n\t6.-Salir\n");
		scanf("%d",&op);
		while(op<1||op>6){
			printf("\tOpcion invalida  \n");
			scanf("%d",&op);
		}
		//AbrirEle(&Listat);
		switch(op){
			case 1:
			printf("\tAlta\nIngrese  el Id del producto ");
			scanf("%d",&id);
			printf("\n");
			printf("Ingresa el nombre del producto ");
			scanf("%s",nom);
			printf("\n");
			printf(  "Ingresa Precio de compra del producto ");
			scanf("%f",&preC);
			printf("\n");
			printf("Ingresa Precio de venta del producto ");
			scanf("%f",&preV);
			printf("\n");
			printf("Ingresa la cantidad de productos  ");
			scanf("%d",&cantidad);
			printf("\n");
			Alta(&Listat,id,nom,preV,preC,cantidad);
			system("cls");
			printf("Dato Ingresado con exito\n");
			break;
			case 2:
			int nume;
			printf("Ingrese el ID a eliminar  ");
			scanf("%d",&nume);
			Eliminar(&Listat,nume);
			break;
			case 3:
			Modificar(&Listat);
			break;
			case 4:
			system("cls");
			Imprimir(Listat);
			printf("\n");
			break;
			case 5:
			GuardarElem(Listat);
			break;
			case 6:
			GuardarElem(Listat);
			system("cls");
			break;
		}
	}
	while(op!=6);

}
void MenuClientes(TipoCliente *iniCola,TipoCliente *finCola,TipoProducto *PilaT,TipoDProducto *ListaP){
	int op,id,cantidad,busq,i=1;
	int cont,num;
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
			insertarCliente(&iniCola,&finCola,ListaP,i++);
			ImpCliente(iniCola);
			//printf("Folio del Cliente No.%d\n",i-1);
			printf("Ingresa el folio del producto\n");
			scanf("%d",&num);
			if(Buscar(ListaP,num)==0)
				printf("No Esta el Producto\n");
			else{
				int i=0;
				while( i<50)
				{
					nom[i]=num;
				}
				i++;
			}
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
        
     //   printf("%d",nuevo->numcte);
		if(*finCola!=NULL){
			(*iniCola)->sig=nuevo;
			(*finCola)=nuevo;

		}
		if (*iniCola==NULL){
			(*iniCola)=nuevo;		
		}
	}
	printf("Cliente insertado\n");	
}
void EliCliente(TipoCliente **iniCola,TipoCliente **finCola,float *num){
	TipoCliente *Pnodo;
	Pnodo=*iniCola;
	if (!Pnodo)
		printf("No hay Clientes\n");
	*iniCola=Pnodo->sig;
	*num=Pnodo->Total;
	printf("Cliente Eliminado %d \n",Pnodo->numC);
	Pnodo=NULL;
	if(*iniCola==NULL){
		*finCola=NULL;
	//printf("No hay Clientes\n");
 }
}
void ImpCliente(TipoCliente *iniCola){
	TipoCliente *Pnodo;
	Pnodo=iniCola;
	if(Pnodo==NULL)
		printf("No Hay Clientes\n");
	else{
		while(Pnodo!=NULL){
			printf("Cliente No.%d\n",Pnodo->numC);	
			Pnodo=Pnodo->sig;
		}

	}
}