#include<stdio.h>
void main()
{
	int m,n,p,q,a[3][3],b[3][3];
	printf("Enter the size of array A (m*n): ");
	scanf("%d%d",&m,&n);
	printf("Enter the values for array A: ");
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);

	printf("Enter the size of array B (m*n): ");
	scanf("%d%d",&p,&q);	
	printf("Enter the values for array B: ");
	for(int i=0;i<p;i++)
		for(int j=0;j<q;j++)
			scanf("%d",&b[i][j]);
	
	printf("Matrix A:\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			printf(" %d",a[i][j]);
		printf("\n");
	}

	printf("Matrix B:\n");
	for(int i=0;i<p;i++)
	{
		for(int j=0;j<q;j++)
			printf(" %d",b[i][j]);
		printf("\n");
	}

	printf("\nSum of matrices:\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			printf("  %d",a[i][j]+b[i][j]);
		printf("\n");
	}
}
