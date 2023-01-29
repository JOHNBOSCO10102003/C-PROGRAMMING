#include<stdio.h>
int main()
{
	int i,j,n;
	printf("\nEnter a Rows : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		//spaces
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		//stars
		for(j=0;j<2*n-(2* i+1);j++)
		{
			printf("*");
		}
		//spaces
		for(j=0;j<i;j++)
		{
			printf("");
		}
		printf("\n");
	}
	return 0;
}

/*

* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
        
*/
