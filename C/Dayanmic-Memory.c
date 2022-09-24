#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int i;
    int no;
    printf("Enter size:");
    scanf("%d",&no);
    ptr=(int*)malloc(no*sizeof(int));
    printf("Enter value:-\n");
    for(i = 0; i < no; i++)
    {
        printf("Value[%d]:",i+1);
        scanf("%d",&ptr[i]);
    }
    printf("\nValue is:-\n");
    for(i = 0; i < no; i++)
    {
        printf("Value[%d]:\t%d\n",i+1,ptr[i]);
    }
    return 0;
}