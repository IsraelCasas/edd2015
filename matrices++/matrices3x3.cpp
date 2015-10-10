#include <iostream>



using namespace std;



int main() 

{

	



	int x=3,y=3;

    	int M1[x][y];

    	int M2[x][y];

    	int MF[x][y];

    	int cont,a,b;



	   cout<<"Programa que multiplica matrices de 3x3 \n";

	   cout<<"A continuacion introduce los valores de las matrices: \n"; 	 





	    for(a=0;a<=x-1;a++){      

            for(b=0;b<=x-1;b++){

                cout<<"M1 ="<<"["<<a+1<<"]"<<"["<<b+1<<"] = ";

                cin>>cont;

                M1[a][b]=cont;

                

			       }

			       }



		

            for(a=0;a<=x-1;a++){      

            for(b=0;b<=x-1;b++){

                cout<<"M2 ="<<"["<<a+1<<"]"<<"["<<b+1<<"] = ";

                cin>>cont;

                M2[a][b]=cont;

                

            		       }

        		       }

		cout<<endl;



//Mostrando matrices.



		cout<<"Matriz M1:\n";

    		for(a=0;a<=x-1;a++){           

        	for(b=0;b<=x-1;b++){

            		cout<<"["<< M1[a][b]<<"]";

        			   }

        		cout<<endl;

    			           }



        	cout<<"Matriz M2:\n";

    		for(a=0;a<=x-1;a++){             

        	for(b=0;b<=x-1;b++){

            		cout<<"["<<M2[a][b]<<"]";

        			   }

        		cout<<endl;

    				    }





    cout<<"\n\nResultado de la multiplicacion de matrices: \n\n";





		int i,j,k;

		for(i=0;i<=x-1;i++){

    		for(j=0;j<=y-1;j++){

        		MF[i][j]=0;

        			for(k=0;k<=y-1;k++){

            			MF[i][j]=(MF[i][j]+(M1[i][k]*M2[k][j]));

        				   }

        			cout<<"["<<MF[i][j]<<"]";

          			   }

          			cout<<endl;

}



    return 0;

}

	

	


