#include<stdio.h>
void main()
{
	int a[20],n;
	printf("Enter the number of values: ");
	scanf("%d",&n);
	printf("Enter the values : ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int j=0;j<n;j++)
		printf("\n%d",a[j]*a[j]);
	printf("\n");
}

