#include<stdio.h>
int main()
{
	int r,sp,p,no,n;
	printf("Enter no of rows:");
	scanf("%d",&n);
	
	for(r=1;r<=n-1;r++)
	{
		for(sp=n-1;sp>=r;sp--)
		{
			printf(" ");
		}
		for(p=1;p<=r;p++)
		{
			printf("*");
		}
		printf("\n");
	}
		for(r=n;r>=1;r--)
	{
		for(sp=n-1;sp>=r;sp--)
		{
			printf(" ");
		}
		for(p=1;p<=r;p++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
