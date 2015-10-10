#include <stdio.h>
#include <stdlib.h> 

int main()
{

	int x=3,y=3;
    	int M1[x][y];
    	int M2[x][y];
    	int MF[x][y];
    	int cont,a,b;

	   printf("Programa que multiplica matrices de 3x3 \n");
	   printf("A continuacion introduce los valores de las matrices: \n"); 	 


	    for(a=0;a<=x-1;a++){      
            for(b=0;b<=x-1;b++){
                printf("M1[%d][%d]=", a+1,b+1);
                scanf("%d",&cont);
                M1[a][b]=cont;
                
			       }
			       }

		
            for(a=0;a<=x-1;a++){      
            for(b=0;b<=x-1;b++){
                printf("M2[%d][%d]=", a+1,b+1);
                scanf("%d",&cont);
                M2[a][b]=cont;
                
            		       }
        		       }
		printf("\n");

//Mostrando matrices.

		printf("Matriz M1:\n");
    		for(a=0;a<=x-1;a++){           
        	for(b=0;b<=x-1;b++){
            		printf("[""  %d""]",M1[a][b]);
        			   }
        		printf("\n");
    			           }

        	printf("Matriz M2:\n");
    		for(a=0;a<=x-1;a++){             
        	for(b=0;b<=x-1;b++){
            		printf("[" " %d""]",M2[a][b]);
        			   }
        		printf("\n");
    				    }


    printf("\n\nResultado de la multiplicacion de matrices: \n\n");


		int i,j,k;
		for(i=0;i<=x-1;i++){
    		for(j=0;j<=y-1;j++){
        		MF[i][j]=0;
        			for(k=0;k<=y-1;k++){
            			MF[i][j]=(MF[i][j]+(M1[i][k]*M2[k][j]));
        				   }
        			printf("["  " %d""]",MF[i][j]);
          			   }
          			printf("\n");
}

    return 0;
}
