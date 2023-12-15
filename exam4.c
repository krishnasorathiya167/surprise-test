#include<stdio.h>

main()
{
	int i,n;
	
	printf("Enter Of Array Size = ");
	scanf("%d",&n);
	
	printf("Enter Value Of Element = \n");
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("All Array = ");
	
	for(i=0;i<n;i++)
	{
		printf("%d, ",a[i]);	
	}
	
	printf("\nAll Negative Array = ");
	
	for(i=0;i<n;i++)
	{
		if(i<0)
		{
		printf("%d",a[i]);	
		}	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		
}