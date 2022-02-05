#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[20],c[20],d[20];
	int n,i;
	printf("enter a\n");
	gets(a);
	printf("enter b\n");
		gets(b);
	printf("enter c\n");
	gets(c);
	n=strlen(a);
	strcpy(d,b);
	strrev(c);
	strlwr(c);
	strupr(b);
	strcmp(b,c);
	strcat(a,b);
	printf(" string length of a is  %d\n",n);
	printf("string copy of b into d is %s\n",d);
	printf("string reverse of a is %s\n",c);
	printf("string lower case of a is %s\n",c);
printf("string upper case of b is %s\n",b);
if(i==0)
{
	printf("strcmp is same\n");
	}
	else
	{
		printf("not same\n");
		}
		printf("string join  of a,b is %s\n",a);
			
}
