#include<stdio.h>
int add(int a, int b)
{
    return a+b;
}
int main()
{
	int a,b;
	printf("Enter any 2 no:");
	scanf("%d%d",&a,&b);
    printf("\nAddition is:%d",add(a,b));
}
