
#include<stdio.h>
int main()
{
    int no[10];   
    int i;
    int *ptr;
    ptr=&no[0];
    printf("\nEnter values:-\n");
    for ( i = 0; i < 10; i++)
    {
        /* code */
        printf("Value[%d]:",i+1);
        scanf("%d",&(*ptr++));
    }
    ptr=&no[0];
    printf("\nValues are:-\n");
    for ( i = 0; i < 10; i++)
    {
        /* code */
        printf("\nvalue[%d]:%d",i+1,*ptr++);
    }
        
}
    
    
