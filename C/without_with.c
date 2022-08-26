#include<stdio.h>
void data(int id,char nm[20])
{
	/*printf("enter student id:");
	scanf("%d",&id);
	printf("Enter student name:");
	scanf("%s",&nm);*/
    printf("\nStudent id is:%d",id);
    printf("\nStudent name is:%s",nm);
}

void main()
{
	
	
    int id;
	char nm[20];
	printf("Enter sudent id:");
	scanf("%d",&id);
	printf("Enter student name:");
	scanf("%s",&nm);
	data(id,nm);
//	printf("%d",id);
}
