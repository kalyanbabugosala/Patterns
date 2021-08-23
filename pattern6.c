#include<stdio.h>
int main()
{
	int r,p,no,n;
	printf("Enter no of rows:");
	scanf("%d",&n);
	for(r=1;r<=n;r++)
	{
		no=1;
		for(p=r;p<=n;p++)
		{
			printf("%d ",no);
			no++;
		}
	
		printf("\n");
	}
}
