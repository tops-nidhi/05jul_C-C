#include<stdio.h>
struct stdata
{
    int id;
    char nm[20];
}st[10];
void main()
{
    int i;
    for(i = 0; i < 5; i++)
    {
        printf("\nEnter student id:");
        scanf("%d",&st[i].id);
        pritnf("\nEnter student name:");
        scanf("%s",&st[i].nm);
    }
    for(i = 0; i < 5; i++)
    {
        pritnf("\n%d Student id is:%d",i+1,st[i].id);
        printf("\n%d Student name is:%s",i+1,st[i].nm);
    }
}