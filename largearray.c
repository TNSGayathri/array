#include<stdio.h>
void main()
{
	int i,n,large=0;
	scanf("%d",&n);
	int num[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++)
	{
	
	if(large<num[i])
	{
		large=num[i];
	}
	else
	{
		large=large;
	}
}
printf("%d",large);
}
