//Autor:Karhenpe
#include <stdio.h>
#include <stdlib.h>


int main(){
int op;
char p;
    b:
    do{		
        printf("\t\t\tUNIVERSIDAD\n\n" );
        printf("\t\tMENU\n");
        printf("\t1.-Facultad Disponible\n\t2.-Registro Alumnos\n\t3.-Horarios\n\t4.-Fechas para Presentar el Examen\n\t5.-Salir\n");
        printf("\n\tDigite la opci%cn: ",162);
        scanf("%d",&op);
        printf("\n\n");
        while(op<1||op>5){
            printf("\tOpci%cn invalida: ",162);
            scanf("%d",&op);
        }
        switch(op){
        
            case 1:
             h:
                printf("\n\t\tFacultad Disponible\n\n");
                    printf("\t1.-Ingenieria\n\t2.-Medicina\n\t3.-Psicolog%ca\n\t4.-Odontolog%ca\n\t5.-Arte\n\t6.-Idiomas\n\t7.-Derecho\n\t8.-Menu Principal\n",161,161);
                    printf("\n\tDigite la opci%cn: ",162);
                    scanf("%d",&op);
                    printf("\n\n");
                    while(op<1||op>8){
                        printf("\tOpci%cn invalida  \n",162);
                        scanf("%d",&op);
                    }
                    switch(op){
                        case 1:
                            printf("\n\t***Ingenier%ca***\n"),161;
                            printf("\nDesea regresar al men%c S(s%c) N(No)))",163,161);
						    scanf("%s",&p);			
							if(p=='s')
							{
								goto h;
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
                            printf(" \n\t***Medicina*** \n");
                            printf("\nDesea regresar al men%c S(s%c) N(No)))",163,161);
						   scanf("%s",&p);			
							if(p=='s')
							{
								goto h;
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
                            printf(" \n\t***Psicolog%ca*** \n ",161);
                            printf("\nDesea regresar al men%c S(s%c) N(No)))",163,161);
						   scanf("%s",&p);			
							if(p=='s')
							{
								goto h;
							}
							else
							{
								printf("\t\t\n*****************");
								printf("\t\t\nFin del programa");
								printf("\t\t\n*****************");
								exit (0);
							}
                        break;
                        case 4:
                            printf(" \n\t***Odontolog%ca*** \n ",161);
                                printf("\nDesea regresar al men%c S(s%c) N(No)))",163,161);
                            scanf("%s",&p);			
                                if(p=='s')
                                {
                                    goto h;
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
                            printf(" \n\t***Artes*** \n ");
                            printf("\nDesea regresar al men%c S(s%c) N(No)))",163,161);
						    scanf("%s",&p);			
							if(p=='s')
							{
								goto h;
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
                            printf(" \n\t***Idiomas*** \n ");
                            printf("\nDesea regresar al men%c S(s%c) N(No)))",163,161);
						   scanf("%s",&p);			
							if(p=='s')
							{
								goto h;
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
                            printf(" \n\t***Derecho*** \n ");
                            printf("\nDesea regresar al men%c S(s%c) N(No)))",163,161);
						   scanf("%s",&p);			
							if(p=='s')
							{
								goto h;
							}
							else
							{
								printf("\t\t\n*****************");
								printf("\t\t\nFin del programa");
								printf("\t\t\n*****************");
								exit (0);
							}
                        break;
                        case 8:
                            goto b;
                        break;
                    }

            break;
            case 2:
                char nombre[50],ape[50],mes[20],escuela[50],tipoS[10];
                int anio,edad;
                float prom;
                printf("\n\t\tResgistro Alumnos\n");
                printf("\n\tNombre: ");
                scanf("%s",&nombre);
                printf("\n\tApellido: ");
                scanf("%s",&ape);
                printf("\n\tA%co de nacimiento: ",164);
                scanf("%d",&anio);
                printf("\n\tMes de nacimiento: ");
                scanf("%s",mes);
                printf("\n\tNombre Escuela: ");
                scanf("%s",escuela);
                printf("\n\tPromedio: ");
                scanf("%f",&prom);
                if(prom<=6)
                    printf("\n\t******No alcanzas el rango establecido******\n\n\n");
                 
                 printf("\nDesea regresar al men%c S(s%c) N(No)))",163,161);
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
            n:
                printf("\n\n\t\tHorarios\n");
                printf("\t1.-Ingenieria\n\t2.-Medicina\n\t3.-Psicolog%ca\n\t4.-Odontolog%ca\n\t5.-Arte\n\t6.-Idiomas\n\t7.-Derecho\n\t8.-Menu Principal\n",161,161);
                    printf("\n\tDigite la opci%cn: ",162);
                    scanf("%d",&op);
                    printf("\n\n");
                    while(op<1||op>8){
                        printf("\tOpci%cn invalida  \n",162);
                        scanf("%d",&op);
                    }
                    switch(op){
                        case 1:
                            printf("\n\t\t***Horario Ingenier%ca***\n",161);
                            printf("\n\tLunes a Viernes de  8:00 am - 2:00 pm\n");
                            printf("\nDesea regresar al men%c S(s%c) N(No)))",163,161);
						    scanf("%s",&p);			
							if(p=='s')
							{
								goto n;
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
                            printf(" \n\t***Horario Medicina*** \n");
                            printf("\n\tLunes a Viernes de  7:00 am - 4:00 pm\n");
                            printf("\nDesea regresar al men%c S(s%c) N(No)))",163,161);
						   scanf("%s",&p);			
							if(p=='s')
							{
								goto n;
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
                            printf(" \n\t***Horario Psicolog%ca*** \n ",161);
                            printf("\n\tLunes, Miercoles y Viernes de  12:00 pm - 7:00 pm\n");
                            printf("\nDesea regresar al men%c S(s%c) N(No)))",163,161);
						   scanf("%s",&p);			
							if(p=='s')
							{
								goto n;
							}
							else
							{
								printf("\t\t\n*****************");
								printf("\t\t\nFin del programa");
								printf("\t\t\n*****************");
								exit (0);
							}
                        break;
                        case 4:
                            printf(" \n\t***Horario Odontolog%ca*** \n ",161);
                            printf("\n\tLunes a Jueves de 7:00 am - 3:00 pm\n");
                            printf("\nDesea regresar al men%c S(s%c) N(No)))",163,161);
                            scanf("%s",&p);			
                                if(p=='s')
                                {
                                    goto n;
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
                            printf(" \n\t***Horario Artes*** \n ");
                            printf("\n\tMartes a Jueves de 10:00 am - 5:00 pm\n");
                            printf("\nDesea regresar al men%c S(s%c) N(No)))",163,161);
						    scanf("%s",&p);			
							if(p=='s')
							{
								goto n;
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
                            printf(" \n\t***Horario Idiomas*** \n ");
                            printf("\n\tLunes a Jueves de  10:00 am - 4:00 pm\n");
                            printf("\nDesea regresar al men%c S(s%c) N(No)))",163,161);
						   scanf("%s",&p);			
							if(p=='s')
							{
								goto n;
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
                            printf(" \n\t***Horario Derecho*** \n ");
                            printf("\n\tLunes a Viernes de  8:00 am - 2:00 pm\n");
                            printf("\nDesea regresar al menu S(si) N(No)))");
						   scanf("%s",&p);			
							if(p=='s')
							{
								goto n;
							}
							else
							{
								printf("\t\t\n*****************");
								printf("\t\t\nFin del programa");
								printf("\t\t\n*****************");
								exit (0);
							}
                        break;
                        case 8:
                            goto b;
                        break;
                    }
            break;
            case 4:
                i:
                printf("\n\t\tFechas para Presentar el Examen\n");
               printf("\t1.-Ingenieria\n\t2.-Medicina\n\t3.-Psicolog%ca\n\t4.-Odontolog%ca\n\t5.-Arte\n\t6.-Idiomas\n\t7.-Derecho\n\t8.-Menu Principal\n",161,161);
                    printf("\n\tDigite la opci%cn: ",162);
                    scanf("%d",&op);
                    printf("\n\n");
                    while(op<1||op>8){
                        printf("\tOpci%cn invalida  \n",162);
                        scanf("%d",&op);
                    }
                    switch(op){
                        case 1:
                            printf("\n\t\t***Examen Ingenier%ca***\n",161);
                            printf("\n\tLunes 7 de Octubre de 8:00 am - 10:00 am\n");
                            printf("\n\tAula 5\n");
                            printf("\nDesea regresar al men%c S(s%c) N(No)))",163,161);
						    scanf("%s",&p);			
							if(p=='s')
							{
								goto i;
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
                            printf(" \n\t***Examen Medicina*** \n");
                            printf("\n\tMartes 8 de Octubre de 9:00 am - 11:00 am\n");
                            printf("\n\tAula 10\n");
                            printf("\nDesea regresar al men%c S(s%c) N(No)))",163,161);
						   scanf("%s",&p);			
							if(p=='s')
							{
								goto i;
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
                            printf(" \n\t***Examen Psicolog%ca*** \n ",161);
                            printf("\n\tMiercoles 9 de Ocutubre de  9:00 am - 11:00 am\n");
                            printf("\n\tAula 3\n");
                            printf("\nDesea regresar al men%c S(s%c) N(No)))",163,161);
						   scanf("%s",&p);			
							if(p=='s')
							{
								goto i;
							}
							else
							{
								printf("\t\t\n*****************");
								printf("\t\t\nFin del programa");
								printf("\t\t\n*****************");
								exit (0);
							}
                        break;
                        case 4:
                            printf(" \n\t***Examen Odontolog%ca*** \n ",161);
                            printf("\n\tLunes 7 de Octubre de 10:00 am - 12:00 pm\n");
                            printf("\n\tAula 6\n");
                            printf("\nDesea regresar al men%c S(s%c) N(No)))",163,161);
                            scanf("%s",&p);			
                                if(p=='s')
                                {
                                    goto i;
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
                            printf(" \n\t***Examen Artes*** \n ");
                            printf("\n\tMartes 8 de Octubre de 10:00 am - 12:00 pm\n");
                            printf("\n\tAula 14\n");
                            printf("\nDesea regresar al men%c S(s%c) N(No)))",163,161);
						    scanf("%s",&p);			
							if(p=='s')
							{
								goto i;
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
                            printf(" \n\t***Examen Idiomas*** \n ");
                            printf("\n\tViernes 11 de Octubre de 12:00 pm - 2:00 pm\n");
                            printf("\n\tAula 4\n");
                            printf("\nDesea regresar al menu S(si) N(No)))");
						   scanf("%s",&p);			
							if(p=='s')
							{
								goto i;
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
                            printf(" \n\t***Examen Derecho*** \n ");
                            printf("\n\tJueves 10 de Octubre de 11:00 am - 1:00 pm\n");
                            printf("\n\tAula 1\n");
                            printf("\nDesea regresar al men%c S(s%c) N(No)))",163,161);
						   scanf("%s",&p);			
							if(p=='s')
							{
								goto i;
							}
							else
							{
								printf("\t\t\n*****************");
								printf("\t\t\nFin del programa");
								printf("\t\t\n*****************");
								exit (0);
							}
                        break;
                        case 8:
                            goto b;
                        break;
                    }
            break;
            case 5:
                exit(0);
            break;
        }   
    }
	while(op!=5); 
return 0;
}