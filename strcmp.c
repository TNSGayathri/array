#include<stdio.h>
int main()
{
	int i=100,j=100,c;
	char a[i],b[j];
	int l1=0,l2=0;
	scanf("%s%s",a,b);
	for(i=0;a[i]!='\0';i++)
	{
		l1++;
	}
	for(j=0;b[j]!='\0';j++)
	{
		l2++;
	}
	if(l1!=l2)
	{
		printf("not same");
	}
	else if(l1==l2)
	{
		while(i<l1)
		{
			if(a[i]==b[j])
			{
				c++;
			}
			else
			{
				break;
			}
		}
	i++;
	j++;
	if(c==0)
	{
		printf("\nsame");
	}
	else
	{
		printf("\nnot same");
	}
}
}
