#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
typedef struct Arbol{int dato;
	struct Arbol *p;
	struct Arbol *izq;
	struct Arbol *der;
}Tipoarbol;

typedef Tipoarbol *TipoArbolPtr;
void insertar(TipoArbolPtr *rama,int dat);
void Enorden(TipoArbolPtr raiz);
void Posorden(TipoArbolPtr raiz);
void Preorden(TipoArbolPtr raiz);
TipoArbolPtr Minimo(TipoArbolPtr raiz);
TipoArbolPtr Maximo(TipoArbolPtr raiz);
TipoArbolPtr BusquedaA(TipoArbolPtr raiz,int num);
TipoArbolPtr Predecesor(TipoArbolPtr raiz, int num);
TipoArbolPtr Sucesor(TipoArbolPtr raiz, int num);
TipoArbolPtr EliminarS(TipoArbolPtr *raiz,TipoArbolPtr root);
TipoArbolPtr EliminarP(TipoArbolPtr *raiz,TipoArbolPtr root);
int main(){
	TipoArbolPtr ram,aux,min,max,pre,suc,temP,eliP,temS,eliS;
	int dato,op,Opcion,num,number,num1;
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
			break;
			case 3:
			printf("\t\t--Buscar Elemento--\t\n");
			if(ram!=NULL){
				printf("Introducuzca el numero a Buscar\n");
				scanf("%d",&num);
				aux=BusquedaA(ram,num);
				if(aux!=NULL)
				printf("El dato encontrado es:%d\n",aux->dato);
			 else 
			 	printf("El dato no esta\n");
			}
			else
				printf("No hay elementos\n\n\n");
			
			break;
			case 4:
			//printf("Encontrar Minimo\n");
			min=Minimo(ram);
			printf("El minimo es: %d\n",min->dato);
			break;
			case 5:
			//printf("Encontrar Maximo\n");
			max=Maximo(ram);
			printf("El Maximo es: %d\n",max->dato);
			break;
			case 6:
			printf("Encontrar Sucesor\n");
			printf("ingrese el numero\n");
			scanf("%d",&num1);
			if(ram==NULL)
				printf("No tiene elementos\n");
			else{
            suc=Sucesor(ram,num1);
            if(suc!=NULL)
            	printf("El Sucesor de %d es %d\n",num1,suc->dato);
            else
            	printf("No tiene Sucesor\n");
			break;
			case 7:
			printf("Encontrar Predecesor\n");
			printf("ingrese el numero\n");
			scanf("%d",&number);
			if(ram==NULL)
				printf("No tiene elementos\n");
			else{
            pre=Predecesor(ram,number);
            if(pre!=NULL)
            	printf("El Predecesor de %d es %d\n",number,pre->dato);
            else
            	printf("No tiene predecesor\n");            }
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
				int numS;
				case 1:
				printf("Sucesor\n");
				printf("Ingrese el numero a Eliminar \n");
				scanf("%d",&numS);
                temS=BusquedaA(ram,numS);
                if(temS==NULL)
                printf("No existe\n");
                eliS=EliminarS(&ram,temS);
                printf("Su Sucesor es:%d\nDato eliminado %d\n",eliP->dato,numS);
				break;
				case 2:
				int numP;
				printf("Predecesor\n");
				printf("Ingrese el numero a Eliminar \n");
				scanf("%d",&numP);
                temP=BusquedaA(ram,numP);
                if(temP==NULL)
                	printf("No existe\n");
                eliP=EliminarS(&ram,temP);
                printf("Su Predecesor es:%d\nDato eliminado %d\n",eliP->dato,numP);
				break;
			}		
			break;
			case 9: exit(0);
			break;
		}
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
		Preorden(raiz->izq);
		Preorden(raiz->der);
	}
}
TipoArbolPtr Minimo(TipoArbolPtr raiz){
	if(raiz==NULL)
		return NULL;
	else{
		if(raiz->izq==NULL)
			return raiz;
		else
			Minimo(raiz->izq);	
	}
}
TipoArbolPtr Maximo(TipoArbolPtr raiz){
	if(raiz==NULL)
		return NULL;
	else{
		if(raiz->der==NULL)
			return raiz;
		else
			Maximo(raiz->der);	
	}
}
TipoArbolPtr BusquedaA(TipoArbolPtr raiz,int num){
	if(raiz!=NULL){
		if (raiz->dato==num)
			return raiz;
		else if(num > raiz->dato)
			BusquedaA(raiz->der,num);
		else
			BusquedaA(raiz->izq,num);
	}
	else 
		return raiz;	
}
TipoArbolPtr Predecesor(TipoArbolPtr raiz, int num){
  TipoArbolPtr nodo,aux2;
   	nodo=BusquedaA(raiz,num);
   	if(nodo==NULL)
   		return nodo;
   	if(nodo->izq!=NULL)
   		return Maximo(nodo->izq);
   	aux2=nodo->p;
   	while(aux2!=NULL)
   		if(nodo==aux2->izq){
   			nodo=aux2;
   		aux2=aux2->p;
    	
   	}
   	else 
   	return aux2;
  	 
}
TipoArbolPtr Sucesor(TipoArbolPtr raiz, int num){
  TipoArbolPtr nodo2,aux3;
   	nodo2=BusquedaA(raiz,num);
   	if(nodo2==NULL)
   		return nodo2;
   	if(nodo2->der!=NULL)
   		return Minimo(nodo2->der);
   	aux3=nodo2->p;
   	while(aux3!=NULL)
   		if(nodo2==aux3->der){
   			nodo2=aux3;
   		aux3=aux3->p;
    	
   	}
   	else 
   	return aux3;
  	 
  }
TipoArbolPtr EliminarS(TipoArbolPtr *raiz,TipoArbolPtr root){
	TipoArbolPtr aux4,aux5;
	if(root->izq==NULL|| root->der==NULL)
               aux5=root;
           else
           	aux5=Sucesor(root,root->dato);
           if(aux5->izq!=NULL)
           	      aux4=aux5->izq;
           	  else
           	  	 aux4=aux5->der;
           	  	if(aux4!=NULL)
           	  		aux4->p=aux5->p;
           	  	if(aux5->p==NULL)
           	  		*raiz=aux4;
           	  	else if(aux5==aux5->p->izq)
           	  		 aux5->p->izq=aux4;
           	  	else
           	  		 aux5->p->der=aux4;
           	  		if(aux5!=root)
           	  			root->dato=aux5->dato;
           	  		return aux5;
}
TipoArbolPtr EliminarP(TipoArbolPtr *raiz,TipoArbolPtr root){
	TipoArbolPtr aux6,aux7;
	if(root->izq==NULL|| root->der==NULL)
               aux7=root;
           else
           	aux7=Predecesor(root,root->dato);
           if(aux7->der!=NULL)
           	      aux6=aux7->der;
           	  else
           	  	 aux6=aux7->izq;
           	  	if(aux6!=NULL)
           	  		aux6->p=aux7->p;
           	  	if(aux7->p==NULL)
           	  		*raiz=aux6;
           	  	else if(aux7==aux7->p->der)
           	  		 aux7->p->der=aux6;
           	  	else
           	  		 aux7->p->izq=aux6;
           	  		if(aux7!=root)
           	  			root->dato=aux7->dato;
           	  		return aux7;
}	


