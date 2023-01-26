#include<stdio.h>
int main()
{
	int a[100][100], b[100][100], c[100][100];
	int i, j, n, m;
	printf("\nEnter a Rows : ");
	scanf("%d",&n);
	printf("\nEnter a Columns : ");
	scanf("%d",&m);
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			printf("\nEnter a Value of A[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n\n");
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			printf("\nEnter a Value of B[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n\n");
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			printf("\t%d ",c[i][j]);
		}
		printf("\n\n");
	}
	return 0;
}
