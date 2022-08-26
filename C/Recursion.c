#include<stdio.h>
long int facto(int no)
{
	if(no<=1)
		return 1;
	return no*facto(no-1);	
} 
int main()
{
	int no;
	printf("Enter no to get fectorial:");
	scanf("%d",&no);
	printf("%ld",facto(no));
}
