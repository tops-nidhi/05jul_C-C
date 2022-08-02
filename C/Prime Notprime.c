#include<stdio.h>
int main()
{
	int i,no,flag=0;
	printf("Enter no that you want to check no is prime or not:");
	scanf("%d",&no);	
	for(i=2;i<no;i++)
	{
		if(no%i==0)
		{
			flag=1;	
//			goto check;
		}
	}
//	check:
		if(flag == 0)
		{
			printf("\n%d is prime no.",no);	
		}
		else
		{
			printf("\n%d is not prime no.",no);
		}
}
