#include<stdio.h>
int main()
{
	int rs,cs;
	scanf("%d%d",&rs,&cs);
	int a[rs][cs],i=0,j=0,sum=0,b[i][j],c[i][j];
	for(i=0;i<rs;i++)
	{
		for(j=0;j<cs;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}for(i=0;i<rs;i++)
	{
		for(j=0;j<cs;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}for(i=0;i<rs;i++)
	{
		for(j=0;j<cs;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<rs;i++)
	{
		for(j=0;j<cs;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
		}
		
	


