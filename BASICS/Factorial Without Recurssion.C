#include<stdio.h>
int main()
{
	int n, fact=1, i;
	printf("\nEnter a Number : ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		fact = fact*i;
	}
	printf("\nFactorial for given number %d is : %d",n,fact);
	return 0;
}
