#include<stdio.h>

main()
{
	int i,j,r,c;
	
 	printf("Enter Row Size = ");
	scanf("%d",&r);
	
	printf("Enter Column Size = ");
	scanf("%d",&c);
	
	int a[r][c];
	
	printf("Enter value OF Element = \n\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("Matric Are = \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	printf("Transpose Matrix = \n");
	
	for(j=0;j<r;j++)
	{
		for(i=0;i<c;i++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	
}