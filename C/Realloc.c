#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int i;
    int no;
    printf("Enter size:");
    scanf("%d",&no);
    ptr=(int*)calloc(no,sizeof(int));
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
    printf("\nEnter new size:");
    scanf("%d",&no);
    ptr=(int*)realloc(ptr,no*sizeof(int));
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
    free(ptr);
    return 0;
}