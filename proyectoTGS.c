/* 
Este programa debe realizar la comparacion de una tabla dada teniendo ciertos casos 
Coincidencia vertical:2
Concidencia cruzada:1
Afinidad:3
*/
#include <stdio.h>
#include <stdlib.h>
void ingresar(char vec[100][130]);
void llenarComp(char vec1[100][100]);
int main(){
char vec1[100][130];	
ingresar(vec1);

	return 0;
}
void ingresar(char vec[100][130]){
 FILE *arch,*escribir;
   char vec1[100];
 	 int x,i=0;

 	  arch=fopen("Vinculos fuente.txt","r");
 	  if(arch==NULL){
          	printf("El archivo no se puede abrir\n");
         
 	     exit(0);
     }
     while(1){
      i++;
     	//fgets(vec1[i],30,arch);
   	 fscanf(arch,"%s",vec[i]);
   	  if(feof(arch))
   	  	 break;
      printf("%s\n", vec[i][i] );
       // fprintf(escribir,"%d\n",x*5);

   }


 }
