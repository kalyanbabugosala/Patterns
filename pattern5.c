#include<stdio.h>
int main()
{
	int r,p,n;
	printf("Enter no of rows:");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		for(p=1;p<=n-r+1;p++)
		{
			printf("%d ",p);
		}
		printf("\n");
	}
}
