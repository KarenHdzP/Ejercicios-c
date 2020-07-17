#include <stdio.h>
#include <stdlib.h>
typedef struct nodo
{
	int dato;
	int h;
	struct nodo *izq;
	struct nodo *der;
}NODO;
typedef struct nodo *PNODO;
typedef struct nodo *ARBOL;
int altura(ARBOL );
void insertar(ARBOL *,int );
int maximo(int ,int );
void modificarAltura(ARBOL *);
void rotacionSimpleIzq(ARBOL *);
void rotacionSimpleDer(ARBOL *);
void rotacionDobleIzq(ARBOL *);
void rotacionDobleDer(ARBOL *);
void balancear(ARBOL *);
void inorder(ARBOL ,int );
int maximo(int a,int b)
{
	if(a<=b)
		return b;
	return a;
}
int altura(ARBOL t)
{
	if(t==NULL)
		return -1;
	return t->h;
}
void modificarAltura(ARBOL *t)
{
	(*t)->h=maximo(altura((*t)->izq),altura((*t)->der))+1;
}
void rotacionSimpleIzq(ARBOL *t)
{
	ARBOL t1=(*t)->der;
	(*t)->der=t1->izq;
	t1->izq=*t;
	modificarAltura(t);
	modificarAltura(&t1);
	*t=t1;
}
void rotacionSimpleDer(ARBOL *t)
{
	ARBOL t1=(*t)->izq;
	(*t)->izq=t1->der;
	t1->der=*t;
	modificarAltura(t);
	modificarAltura(&t1);
	*t=t1;
}
void rotacionDobleIzq(ARBOL *t)
{
	rotacionSimpleDer(&(*t)->der);
	rotacionSimpleIzq(t);
}
void rotacionDobleDer(ARBOL *t)
{
	rotacionSimpleIzq(&(*t)->izq);
	rotacionSimpleDer(t);
}
void balancear(ARBOL *t)
{
	if(altura((*t)->izq)-altura((*t)->der)==2)
	{
		if(altura((*t)->izq->izq)>=altura((*t)->izq->der))
			rotacionSimpleDer(t);
		else
			rotacionDobleDer(t);
	}
	if(altura((*t)->izq)-altura((*t)->der)==-2)
	{
		if(altura((*t)->der->der)>=altura((*t)->der->izq))
			rotacionSimpleIzq(t);
		else
			rotacionDobleIzq(t);
	}
}
void inorder(ARBOL r,int e)
{
	int j=e;
	if(r==NULL)
		return;
	inorder(r->izq,e+1);
	while(e!=0)
	{
		printf("-");
		e--;
	}
	printf("%d",r->dato);
	inorder(r->der,j+1);
}
void insertar(ARBOL *t,int e)
{
	if(*t==NULL)
	{
		*t=(PNODO)malloc(sizeof(NODO));
		(*t)->h=0;
		(*t)->dato=e;
		(*t)->izq=(*t)->der=NULL;
		return;
	}
	if(e<(*t)->dato)
		insertar(&(*t)->izq,e);
	else
		insertar(&(*t)->der,e);
	balancear(t);
	modificarAltura(t);
}
int main()
{
	ARBOL t=NULL;
	insertar(&t,1);
	insertar(&t,2);
	insertar(&t,3);
	insertar(&t,4);
	insertar(&t,5);
	insertar(&t,6);
	insertar(&t,7);
	inorder(t,0);
return 1;
}
