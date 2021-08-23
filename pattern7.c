#include<stdio.h>
int main()
{
	int r,sp,p,no,n;
	printf("Enter no of rows:");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		for(p=1;p<=r;p++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(r=1;r<=n;r++)
	{
		for(p=n-r;p>=1;p--)
		{
			printf("* ");
		}
		printf("\n");
	}
}
