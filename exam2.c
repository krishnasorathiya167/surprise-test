#include<stdio.h>

main()
{
	int a,b,c;
	
	printf("Enter Value A = ");
	scanf("%d",&a);
	
	printf("Enter Value B = ");
	scanf("%d",&b);
	
	printf("Enter Value C = ");
	scanf("%d",&c);
	
	(a<b)? (a<c)? printf("A is Min"):printf("C is Min")
	     : (b<c)? printf("B is Min"):printf("C is Min");
}