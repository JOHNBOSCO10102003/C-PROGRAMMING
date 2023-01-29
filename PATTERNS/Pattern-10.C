#include<stdio.h>
int main()
{
	int i,j,n;
	printf("\nEnter a Rows : ");
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i++)
	{
		int stars=i;
		if(i>n)
		{
			stars=2*n-i;
		}
		for(j=1;j<=stars;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

/*

*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*

*/
