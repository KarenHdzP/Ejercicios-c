#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct Arbol{
	int dato;
	struct Arbol *p;
	struct Arbol *izq;
	struct Arbol *der;

}Tipoarbol;

typedef Tipoarbol *TipoArbolPtr;

void insertar(TipoArbolPtr *rama,int dat);
void Enorden(TipoArbolPtr raiz);
void Posorden(TipoArbolPtr raiz);
void Preorden(TipoArbolPtr raiz);
void Minimo(TipoArbolPtr raiz);
void Maximo(TipoArbolPtr raiz);
void BusquedaA(TipoArbolPtr raiz,int num);

int main(){
	TipoArbolPtr ram;
	int dato,op,Opcion,num;
	ram=NULL;

	do{
		printf("\t \tArbol Binario\t\n\n");
		printf("1.-Insertar un Elemento\n2.-Imprimir\n3.-Buscar un Elemento\n4.-Encontrar Minimo\n5.-Encontrar Maximo\n");
		printf("6.-Encontrar Sucesor\n7.-Encontrar Prdecesor\n8.-Eliminar\n9.-Salir\n");
		scanf("%d",&op);
		while(op<1 || op>9){
			printf("Opcion invalida\n \tOpcion  ");
			scanf("%d",&op);
		}
		switch(op){
			case 1: 
			printf("Digite el dato\n");
			scanf("%d",&dato);
			system("cls");
			insertar(&ram,dato);
			//printf("%d\n",ram->dato);	 	
			break;
			case 2:

			printf("\t \t Imprimir\t\n");
			printf("1.- Enorden\n2.-Preorden\n3.-Posorden\n");
			scanf("%d",&Opcion);
			while(Opcion<1 || Opcion>3){
				printf("Opcion invalida\n \tOpcion  ");
				scanf("%d",&Opcion);
			}
			switch(Opcion){
				case 1:
				printf("Enorden\n");
				Enorden(ram);
				break;
				case 2:
				printf("Preorden\n");
				Preorden(ram);
				break;
				case 3:
				printf("Posorden\n");
				Posorden(ram);
				break;
			}				
		//system("cls");
			break;
			case 3:
			printf("\t\t--Buscar Elemento--\t\n");
			if(ram!=NULL){
				printf("Introducuzca el numero a Buscar\n");
			scanf("%d",&num);
			BusquedaA(ram,num);
			}
			else
			printf("No hay elementos\n");
			
			break;
			case 4:
			printf("Encontrar Minimo\n");
			Minimo(ram);
			break;
			case 5:
			printf("Encontrar Maximo\n");
			Maximo(ram);
			break;
			case 6:
			printf("Encontrar Sucesor\n");
			break;
			case 7:
			printf("Encontrar Predecesor\n");
			break;
			case 8:
			printf("\t \t Eliminar\t\n");
			printf("1.-Sucesor\n2.-Predecesor\n");
			scanf("%d",&Opcion);
			while(Opcion<1 || Opcion>2){
				printf("Opcion invalida\n \tOpcion  ");
				scanf("%d",&Opcion);
			}
			switch(Opcion){
				case 1:
				printf("Sucesor\n");
				break;
				case 2:
				printf("Predecesor\n");
				break;
			}		
			
			break;
			case 9: exit(0);
			break;

		}
	}

	while(op!=10);

	return 0;
}
void insertar(TipoArbolPtr *rama,int dat){
	TipoArbolPtr nuevo,ant,act;
	nuevo=(TipoArbolPtr)malloc(sizeof (Tipoarbol));
	if(nuevo==NULL)
		printf("No hay memoria\n");
	else{
		nuevo->dato=dat;
		nuevo->p=NULL;
		nuevo->izq=NULL;
		nuevo->der=NULL;

		if(*rama==NULL){

			*rama=nuevo;
			printf("Dato Insertado %d\n",nuevo->dato);
		}
		else{

			ant=*rama;
			act=*rama;
			while(act!=NULL && nuevo->dato!=ant->dato){
				ant=act;
				if(dat < ant->dato)
					act=act->izq;
				else
					act=act->der;
			}
			if(nuevo->dato==ant->dato)
				printf("El dato ya existe\n");
			else {
				if(dat<ant->dato)
					ant->izq=nuevo;
				else
					ant->der=nuevo;
				nuevo->p=ant;
				printf("Dato Insertado %d\n",nuevo->dato);

			}
		}
	}
}
void Enorden(TipoArbolPtr raiz){
	if(raiz!=NULL){
		Enorden(raiz->izq);
		printf("%3d",raiz->dato);
		Enorden(raiz->der);
	}
}                                  	
void Posorden(TipoArbolPtr raiz){
	if(raiz!=NULL){
		Posorden(raiz->izq);
		Posorden(raiz->der);
		printf("%3d",raiz->dato);
	}
}
void Preorden(TipoArbolPtr raiz){
	if(raiz!=NULL){
		printf("%3d",raiz->dato);
		Enorden(raiz->izq);
		Enorden(raiz->der);
	}
}
void Minimo(TipoArbolPtr raiz){
	if(raiz==NULL)
		printf("No hay elementos\n");
	else{
		if(raiz->der==NULL)
			printf("%d\n",raiz->dato);
		else
			Minimo(raiz->izq);	
	}
}
void Maximo(TipoArbolPtr raiz){
	if(raiz==NULL)
		printf("No hay elementos\n");
	else{
		if(raiz->der==NULL)
			printf("%d\n",raiz->dato);
		else
			Maximo(raiz->der);	
	}
}
void BusquedaA(TipoArbolPtr raiz,int num){
	if(raiz->dato!=num){
	BusquedaA(raiz->izq,num);
	if(raiz->dato==num){
	  printf("%d\n",raiz->dato);
	  } 		
		BusquedaA(raiz->der,num);		 
		if(raiz->dato==num){
			printf("%d\n",raiz->dato);	
		}
		}
		else{
			printf("No esta\n");
	}
}