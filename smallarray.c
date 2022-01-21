#include<stdio.h>
void main()
{
	int i,n,small;
	scanf("%d",&n);
	int num[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++)
	{
	
	if(small>num[i])
	{
		small=num[i];
	}
	else
	{
		small=small;
	}
}
printf("%d",small);
}
