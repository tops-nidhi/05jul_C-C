#include<stdio.h>
int main()
{
	int no[5];
	int i;
	for(i=5;i>=0;i--)
	{
		printf("no[%d]:",i);
		scanf("%d",&no[i]);
	}
	for(i=5;i>=0;i--)
	{
		printf("\nno[%d]:\t%d",i,no[i]);
	}
	
}
