#include<stdio.h>
int main()
{
	int rs,cs;
	scanf("%d%d",&rs,&cs);
	int a[rs][cs],i=0,j=0,sum=0;
	for(i=0;i<rs;i++)
	{
		for(j=0;j<cs;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<rs;i++)
	{
		for(j=0;j<cs;j++)
		{
	printf("%d ",a[i][j]);
		}
	printf("\n");	
	}

}
