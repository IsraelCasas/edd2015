#include<stdio.h> 
#include<conio.h> 
int main() 
{ 
int fac=0; 
printf("Programa que calcula el factorial de n valor \n\n");
printf("Ingresa numero para calcular el factorial: "); 
scanf("%d",&fac); 
int temp=fac-1; 
int r=fac; 
while (temp>=1) 
{ 
r=r*temp; 
temp--; 
} 

printf("\nEl factorial de [%d] es: %d ", fac,r); 
getch(); 
} 
