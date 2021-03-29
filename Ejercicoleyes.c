#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
int op,n1,n2,n3,ohm,watt,m,joul,l;
float r;
char  p;
b:
do{		printf("\t\tOPERACIONES\n" );
		printf("\tMENU\n");
		printf("\t1.-Ley de OHM\n\t2.-Ley de Watt\n\t3.-Ley de Joul\n\t4.-Salir\n");
		scanf("%d",&op);
		while(op<1||op>7){
			printf("\tOpcion invalida  \n");
			scanf("%d",&op);
		}
		switch(op){
                       f:
			case 1:
			    printf("\t\tLey de OHM");
                printf("\n\tMENU\n");
		        printf("\t1.-Voltaje\n\t2.-Resistencia\n\t3.-Corriente\n\t4.-Menu principal\n");         
                scanf("%d",&op);
		        while(op<1||op>4){
			        printf("\tOpcion invalida  \n");
			        scanf("%d",&op);
		        }
                switch(op){
                    case 1:
                        printf("\t\tCalcular Voltaje\n\n");
                        printf("\tEscribe la Corriente: ");
                        scanf("%d",&n1);
                        printf("\n\tEscribe la Resistencia: ");
                        scanf("%d",&n2);
                        r=n1*n2;
                        printf("\n\tResultado del voltaje es: %.2f\n",r);
                        printf("\nDesea regresar al menu S(si) N(No)))");
	                    scanf("%s",&p);			
			            if(p=='s')
			            {
				          goto f;
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
                    	printf("\t\tCalcular Resistencia\n\n");
                        printf("\t\nEscribe la Voltaje: ");
                        scanf("%d",&n1);
                        printf("\t\nEscribe la Corriente: ");
                        scanf("%d",&n2);
                        r=n1/n2;
                        printf("\nResultado del Resistencia es: %.2f",r);
                    break;
                    case 3:
                        printf("\t\nCalcular Corriente");
                        printf("\t\nEscribe la Voltaje: ");
                        scanf("%d",&n1);
                        printf("\t\nEscribe la Resistencia: ");
                        scanf("%d",&n2);
                        r=n1/n2;
                        printf("\t\nResultado de la Corriente es: %.2f",r);
                        printf("\nDesea regresar al menu S(si) N(No)))");
	                    scanf("%s",&p);			
			            if(p=='s')
			             {
				    		goto f;
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
			          goto b;
                    break;
                }
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
            g:
			printf("\t\t\nLey de Watt");
            printf("\t\nMENU\n");
		    printf("\t1.-Potencia\n\t2.-Voltaje\n\t3.-Intencidad\n\t4.-Menu Principal\n");         
             scanf("%d",&op);
		        while(op<1||op>4){
			      printf("\tOpcion invalida  \n");
			      scanf("%d",&op);
		        }
                        switch(op){
                    	  case 1:
                             printf("\t\nCalcular Potencia");
                             printf("\t\nEscribe el Voltaje: ");
                             scanf("%d",&n1);
                             printf("\t\nEscribe la Intensidad: ");
                             scanf("%d",&n2);
                             r=n1*n2;
                             printf("\t\nResultado de la Potencia es: %.2f",r);
                             printf("\t\nDesea regresar al menu S(si) N(No)))");
	                         scanf("%s",&p);			
			                if(p=='s')
			                {
			                	goto g;
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
                           printf("\t\t\nCalcular Voltaje");
                           printf("\t\nEscribe la Potencia : ");
                           scanf("%d",&n1);
                           printf("\t\nEscribe la Intencidad: ");
                           scanf("%d",&n2);
                           r=n1/n2;
                           printf("\t\nResultado del Voltaje es: %.2f",r);
                           printf("\nDesea regresar al menu S(si) N(No)))");
	                        scanf("%s",&p);			
							if(p=='s')
							{
								goto g;
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
                            printf("\t\t\nCalcular Intensidad");
                            printf("\t\nEscribe la Potencia: ");
                            scanf("%d",&n1);
                            printf("\t\nEscribe el Voltaje: ");
                            scanf("%d",&n2);
                            r=n1/n2;
                            printf("\t\nResultado de la Intensidad es: %.2f",r);
                            printf("\nDesea regresar al menu S(si) N(No)))");
	                        scanf("%s",&p);			
							if(p=='s')
								{
								goto g;
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
			                 goto b;
                          break;
                    }
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
					case 3:	
                        h:
			 			printf("\t\t\nLey de Joul");
                        printf("\t\t\nMENU\n");
		        		printf("\t1.-Calor\n\t2.-Corriente\n\t3.-Resistencia\n\t4.-Salir\n");         
                        scanf("%d",&op);
		        		while(op<1||op>4){
			  				printf("\tOpcion invalida  \n");
			 			 	scanf("%d",&op);
		       			 }
                        switch(op){
                    	  case 1:
                            printf("\t\t\nCalcular Calor");
                            printf("\t\nEscribe la Corriente: ");
                            scanf("%d",&n1);
                            printf("\t\nEscribe la Resistencia: ");
                            scanf("%d",&n2);
                            printf("\t\nEscribe el Tiempo: ");
                            scanf("%d",&n3);
                            r=(pow(n1,n1)*n2*n3);                                                    
                            printf("\t\nResultado del Calor es: %.2f",r);
                            printf("\nDesea regresar al menu S(si) N(No)))");
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
                           printf("\t\t\nCalcular Corriente");
                           printf("\t\nEscribe la Calor: ");
                           scanf("%d",&n1);
                           printf("\t\nEscribe la Resistencia: ");
                           scanf("%d",&n2);
                           printf("\t\nEscribe el Tiempo: ");
                           scanf("%d",&n3);
                           r=sqrt(n1/(n2*n3));
                           printf("\t\nResultado del Corriente es: %.2f",r);
                           printf("\nDesea regresar al menu S(si) N(No)))");
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
                           printf("\t\nCalcular Resistencia");
                           printf("\t\nEscribe el Calor: ");
                           scanf("%d",&n1);
                           printf("\t\nEscribe la Corriente: ");
                           scanf("%d",&n2);
                           printf("\t\nEscribe el Tiempo: ");
                           scanf("%d",&n3);
            	           r=(n1/(pow(n2,n2)*n3));
                           printf("\t\nResultado de la Resistencia es: %.2f",r);
                           printf("\nDesea regresar al menu S(si) N(No)))");
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
			   				 exit (0);
                          break;
						} 
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
			        case 4:
			 			exit (0);
           			break;
		}
	}
	while(op!=7);
 return 0;
}
