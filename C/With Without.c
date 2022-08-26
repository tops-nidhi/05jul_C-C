#include<stdio.h>
int data()
{
    int id;
    printf("Enter user id:");
    scanf("%d",&id);
    return id;
}
void main()
{
    printf("%d",data());
}
