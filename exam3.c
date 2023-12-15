#include<stdio.h>

main()

{
	int i,n,k,temp,ans;
	
	printf("Enter Value N = ");
	scanf("%d",&n);
	temp=n;
	
	for (ans=0; n!=0; i++)
	{
		k = n % 10;
		ans = ans*10+k;
		n = n/10;
	}
	
	printf("\nReverse Number = %d\n\n",ans);
	
	if(ans==temp)
		{
			printf("Number is palindrome");
		}
		else
		{
			printf("Number is not palindrome");
		}
}