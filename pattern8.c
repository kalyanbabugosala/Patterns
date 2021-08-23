#include<stdio.h>
int main()
{
	int r,sp,p,no,n;
	printf("Enter no of rows:");
	scanf("%d",&n);
	
	for(r=1;r<=n;r++)
	{
		for(sp=1;sp<=r;sp++)
		{
			printf(" ");
		}
		for(p=r;p<=n;p++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
