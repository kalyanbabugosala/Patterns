#include<stdio.h>
int main()
{
	int r,sp,p,no,n;
	printf("Enter no of rows:");
	scanf("%d",&no);
	n=no;
	for(r=1;r<=n;r++)
	{
		for(sp=1;sp<=n-r;sp++)
		{
			printf(" ");
		}
		for(p=1;p<=r;p++)
		{
			printf("%d ",p);
		}
		printf("\n");
	}
}
