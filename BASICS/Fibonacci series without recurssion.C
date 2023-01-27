#include<stdio.h>
int main()
{
	int n, n1=0, n2=1, result, i;
	printf("\nEnter a Number : ");
	scanf("%d",&n);
	printf("%d %d",n1,n2);
	for(i=2; i<n; i++)
	{
		result=n1+n2;
		printf(" %d",result);
		n1=n2;
		n2=result;
	}
	return 0;
}
