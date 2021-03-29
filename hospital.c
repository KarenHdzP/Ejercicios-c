#include <stdio.h>
#include <stdlib.h>

void Registro();

int main(){
int op;
char  p;
b:
do{		printf("\t\tHOSPITAL GENERAL\n" );
		printf("\tMENU\n");
		printf("\t1.-Vasectomia\n\t2.-Parto Normal\n\t3.-Parto Cesarea\n\t4.-Transplante de Corazón\n\t5.-Transplante de Higado\n\t6.-Operación Columna Vertrebral\n\t7.-Salir\n");
		scanf("%d",&op);
		while(op<1||op>7){
			printf("\tOpcion invalida  \n");
			scanf("%d",&op);
		}
		switch(op){
			case 1:
			printf("\t\tVasectomia");
                        Registro();
                        printf("\nDesea regresar al menu S(si) N(No)))");
	                scanf("%s",&p);			
			if(p=='s')
			{
				goto b;
			}
			else
			{
			printf("\t\t\n*****************");
				printf("\t\t\nFin del programa");
				printf("\t\t\n*****************");
                                exit (0);
			}
                        break;
			case 2:
			printf("\t\tParto Normal");
                        Registro();
                        printf("\nDesea regresar al menu S(si) N(No)))");
	                scanf("%s",&p);			
			if(p=='s')
			{
				goto b;
			}
			else
			{
			printf("\t\t\n*****************");
				printf("\t\t\nFin del programa");
				printf("\t\t\n*****************");
                                exit (0);
			}
                        
                        break;
                        case 3:
			printf("\t\tParto Cesarea");
                        Registro();
                        printf("\nDesea regresar al menu S(si) N(No)))");
	                scanf("%s",&p);			
			if(p=='s')
			{
				goto b;
			}
			else
			{
			printf("\t\t\n*****************");
				printf("\t\t\nFin del programa");
				printf("\t\t\n*****************");
                                exit (0);
			}
                        case 4:
                        printf("\t\tTransplante de Corazón");
			Registro();
                        printf("\nDesea regresar al menu S(si) N(No)))");
	                scanf("%s",&p);			
			if(p=='s')
			{
				goto b;
			}
			else
			{
			printf("\t\t\n*****************");
				printf("\t\t\nFin del programa");
				printf("\t\t\n*****************");
                                exit (0);
			}
                        break;
                        case 5:
                        printf("\t\tTransplante de Higado");
			Registro();
                        printf("\nDesea regresar al menu S(si) N(No)))");
	                scanf("%s",&p);			
			if(p=='s')
			{
				goto b;
			}
			else
			{
			printf("\t\t\n*****************");
				printf("\t\t\nFin del programa");
				printf("\t\t\n*****************");
                                exit (0);
			}
                        break;
                        case 6:
			printf("\t\tOperación Columna Vertrebral");
                        Registro();
                        printf("\nDesea regresar al menu S(si) N(No)))");
	                scanf("%s",&p);			
			if(p=='s')
			{
				goto b;
			}
			else
			{
			printf("\t\t\n*****************");
				printf("\t\t\nFin del programa");
				printf("\t\t\n*****************");
                                exit (0);
			}
			
                        break;
			case 7:
			exit (0);
                        break;
		}
	}
	while(op!=7);

 return 0;
}
void Registro(){
   char nombre[50],direc[50],email[20],alergia[20],tipoS[10];
   char sexo[10];
   int telefono,edad;
   float costoR,costoA,costoO,costoM,Tpagar;
               printf("\t\n\nNombre completo del paciente: ");
               scanf("%s",nombre);
               printf("\t\nDirección: ");
               scanf("%s",&direc);
               printf("\t\nTelefono: ");
               scanf("%d",&telefono);               
               printf("\t\nCorreo electronico: ");
               scanf("%s",&email);
               printf("\t\nSexo: ");
               scanf("%s",&sexo);
               printf("\t\nEdad: ");
               scanf("%d",&edad);
               printf("\t\nTipo sanguineo: ");
               scanf("%s",&tipoS);
               printf("\t\nAlergias: ");
               scanf("%s",&alergia);
               printf("\t\nCosto cuarto: ");
               scanf("%f",&costoR);
               printf("\t\nCosto Alimentacion: ");
               scanf("%f",&costoA);
               printf("\t\nCosto Operación: ");
               scanf("%f",&costoO);   
               printf("\t\nCosto Honorarios Medico: ");
               scanf("%f",&costoM);
               Tpagar=costoR+costoA+costoO+costoM;
               printf("\t\nTotal a pagar: %.2f",Tpagar);             
			
}