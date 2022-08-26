#include<stdio.h>
int id;
void getdata()
{
	char nm[20];//local
	printf("Enter your student id:");
	scanf("%d",&id);
	printf("Enter your sytudent name:");
	scanf("%s",&nm);
	printf("\nYour student id is:%d",id);
	printf("\nYour student name is:%s",nm);
}
void main()
{
	getdata();
//	showdata();
}
