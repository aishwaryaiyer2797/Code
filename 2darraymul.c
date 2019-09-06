#include<stdio.h>
#include<stdlib.h>
void mul(int a[20][20],int b[20][20],int m,int n,int p,int q);
void main()
{
	int m,n,p,q,a[20][20],b[20][20],c[20][20];
	printf("Enter the order of matrix A (m*n): ");
	scanf("%d%d",&m,&n);
	printf("Enter the order of matrix B (p*q): ");
	scanf("%d%d",&p,&q);
	if(n!=p)
	{
		printf("The given order of matrices are not suitable for multiplication\n");
		exit(0);
	}
	else
	{
		printf("Enter the values of matrix A: \n");
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				scanf("%d",&a[i][j]);
		printf("Enter the values of matrix B: \n");
		for(int i=0;i<p;i++)
			for(int j=0;j<q;j++)
				scanf("%d",&b[i][j]);
		


		printf("Matrix A: \n");
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
				printf(" %d",a[i][j]);
			printf("\n");
		}
		printf("Matrix B: \n");
		for(int i=0;i<p;i++)
		{
			for(int j=0;j<q;j++)
				printf(" %d",b[i][j]);	
			printf("\n");	
		}

		mul(a,b,m,n,p,q);
	}
}
void mul(int a[20][20],int b[20][20],int m,int n,int p,int q)
{
	int c[20][20];
	for(int i=0;i<m;i++)
		for(int j=0;j<q;j++)
			c[i][j]=0;
	for(int i=0;i<m;i++)
		for(int j=0;j<q;j++)
			for(int k=0;k<p;k++)		
				c[i][j]+=a[i][k]*b[k][j];
	printf("Resultant matrix:\n");	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<q;j++)
			printf("%d ",c[i][j]);
		printf("\n");
	}
}
