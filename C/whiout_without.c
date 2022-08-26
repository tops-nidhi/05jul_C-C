#include<stdio.h>
int id;
void getdata()
{
	char nm[20];//local
	print("Enter your student id:");
	scnaf("%d",&id);
	printf("Enter your sytudent name:");
	scanf("%s",&nm);
}
void showdata()
{
	printf("\nYour student id is:%d",id);
//	printf("\nYour student name is:%s",nm);
}
void main()
{
	getdata();
	showdata();
}
