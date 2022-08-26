#include<stdio.h>
#include<string.h>
void main()
{
	char nm[20];
	char nm1[20];
	
	int len;
	printf("Enter Your name:");
	gets(nm);
	gets(nm1);
	len=strcmp(nm,nm1);
//	puts(nm);
	printf("\nYour name is:%d",len);
}
