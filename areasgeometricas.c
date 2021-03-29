//programa de areas geometricas
#include <stdio.h>
main()
{
	int op,b,ha,a;
	char s;
        float c;
	//
	char p;
        b:
		printf("/////AREAS/////");
		printf("\n1. Triangulo");
		printf("\n2. Cuadrado");
		printf("\n3. Rectangulo");
		printf("\n4. Rombo");
		printf("\n5. Romboide");
		printf("\n6. Trapecio");
		printf("\nEscribre tu opcion:  ");
		scanf("%d",&op);
		if(op==1){
			printf("Triangulo");
			printf("\nDame la base:");
			scanf("%d",&a);
			printf("\nDame la altura:");
			scanf("%d",&b);
                        c=(a*b)/2;
			printf("\nEl resultado del area del triangulo es %.2f",c);
			printf("\nDesea regresar al menu S(si) N(No)))");
			scanf("%s",&p);
			
			if(p=='s')
			{
				goto b;
			}
			else
			{
				printf("/////////////////");
				printf("Fin del programa");
				printf("///////");
			}
		}
		else
		if (op==2){
			printf("Cuadrado");
			printf("\nDame el lado:");
			scanf("%d",&a);
                        c=a*a;
			printf("\nEl resultado del area del cuadrado es %.2f",c);
			printf("\nDesea regresar al menu S(si) N(No)))");
			scanf("%s",&p);
			if(p=='s')
			{
				goto b;
			}
			else
			{
				printf("/////////////////");
				printf("Fin del programa");
				printf("///////");
			}

		}
		else 
		if (op==3){
			printf("Rectangulo");
                        printf("\nDame la base:");
			scanf("%d",&a);
			printf("\nDame la altura:");
			scanf("%d",&b);
                        c=(a*b);
			printf("\nEl resultado del area del rectangulo es %.2f",c);
			printf("\nDesea regresar al menu S(si) N(No)))");
			scanf("%s",&p);
			
			if(p=='s')
			{
				goto b;
			}
			else
			{
				printf("/////////////////");
				printf("Fin del programa");
				printf("///////");
			}
		}
			else 
		if (op==4){
			printf("Rombo");
                        printf("\nDame la diagonal mayor:");
			scanf("%d",&a);
			printf("\nDame la diagonal menor:");
			scanf("%d",&b);
                        c=(a*b)/2;
			printf("\nEl resultado del area del rombo es %.2f",c);
			printf("\nDesea regresar al menu S(si) N(No)))");
			scanf("%s",&p);
			
			if(p=='s')
			{
				goto b;
			}
			else
			{
				printf("/////////////////");
				printf("Fin del programa");
				printf("///////");
			}
		}
		else 
		if (op==5){
			printf("Romboide");
                        printf("\nDame la base 1:");
			scanf("%d",&a);
                        printf("\nDame la altura:");
			scanf("%d",&ha);
                        c=a*ha;
			printf("\nEl resultado del area del Romboide es %.2f",c);
			printf("\nDesea regresar al menu S(si) N(No)))");
			scanf("%s",&p);
			
			if(p=='s')
			{
				goto b;
			}
			else
			{
				printf("/////////////////");
				printf("Fin del programa");
				printf("///////");
			}
		}
		else 
		if (op==6){
			printf("Trapecio");
                        printf("\nDame la base mayor:");
			scanf("%d",&a);
                        printf("\nDame la base menor:");
			scanf("%d",&b);
			printf("\nDame la altura:");
			scanf("%d",&ha);
                        c=((a*b)/2)*ha;
			printf("\nEl resultado del area del Trapecio es %.2f",c);
			printf("\nDesea regresar al menu S(si) N(No)))");
			scanf("%s",&p);
			
			if(p=='s')
			{
				goto b;
			}
			else
			{
				printf("/////////////////");
				printf("Fin del programa");
				printf("///////");
			}
		}	
}
