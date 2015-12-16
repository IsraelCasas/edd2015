#include <iostream>
int fibonacci(int num)
{
    if (num<2)
        return num;
    else
        return fibonacci(num-1) + fibonacci(num-2);
}
int main()
{
    int val=0,res=0,i;
    printf("Serie Recursiva de Fibonacci\n\n");
    printf("Ingresa el numero de valores a mostrar: ");
	scanf("%d",&val);
    printf ("\n");
    
    for(i=0;i<=val-1;i++)
    {
        res = fibonacci(i);
        printf("[ %d ]", res);
    }
    return 0;
}
