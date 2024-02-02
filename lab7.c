#include<stdio.h>
#include<stdlib.h>








void main(){
    int max=5;
    int fre=0,fin=0;
    int cola [max];
    int i=0;
    int x;
    int a;







    do{
     printf("\n");
    printf("\n\t\t\t\tCOLA \nCIRCULAR\n\n");
    printf("\n1. Insertar un dato en la cola circular.\n");
    printf("\n2. Eliminar un dato en la cola circular.\n");
    printf("\nSeleccione la opcion que desee: \n");

    scanf("%i",&x);

    switch(x){

       case 1:

           printf("\nInsercion\n");

           if(fre!=(fin+1)%max){
            printf("\nIngrese el elemento que desea agregar: \n");
            scanf("%i",&a);



            cola[fin]=a;
            fin=(fin+1)%max;

           printf("FRENTE: %i ",fre);
           printf("FINAL: %i",fin);
           printf("\n\n");
           for(i=fre; i<fin; i++){

           	printf("%i, ",cola[i]);
		   }


            }
            else{
                printf("\nLa cola esta llena.\n");
                printf("FRENTE: %i ",fre);
                printf("FINAL: %i",fin);
                printf("\n\n");
                for(i=fre; i<fin; i++){

           	    printf("%i, ",cola[i]);
		        }




                }










            break;
            printf("\n");






       case 2:
           printf("\nEliminacion\n");
           if(fin==fre){

             printf("\nLa cola esta vacia.\n");
            }
           else{
           	cola[fre]=0;
           	fre=(fre+1)%max;
            printf("FRENTE: %i ",fre);
            printf("FINAL: %i",fin);
            printf("\n\n");
           	for(i=fre; i<fin; i++){

           	printf("%i, ",cola[i]);
		   }

		   }

        break;



        default: printf("\nOpcion invalida\n");















    }

    }while(x<1  || x>2 || x==1 || x==2);



















}







