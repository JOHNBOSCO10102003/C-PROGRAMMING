#include<stdio.h>
//Function Declaration
int factorial(int x)
{
	if(x<=1)
	{
		return 1;
	}
	else
	{
		return x*factorial(x-1);
	}
	
}
//Function definition
int main()
{
	int n,fact;
	printf("\nEnter a Number : ");
	scanf("%d",&n);
	fact=factorial(n); //Function calling
	printf("\nFactorial for a given number %d is : %d",n,factorial(n));
}
