#include<stdio.h>
int main()
{
	int r,sp,p,no,n;
	printf("Enter no of rows:");
	scanf("%d",&n);
	no=0;
	for(r=1;r<=n;r++)
	{
	
		for(sp=1;sp<=n-r;sp++)
		{
			printf(" ");
		}
		for(p=1;p<=r;p++)
		{
			no++;
			printf("%d ",no);
		}
		printf("\n");
	}
}
