#include<stdio.h>
int main()
{
    int no[3][3];   
    int i,j;
    printf("Enter value:");
    for ( i = 0; i < 3; i++)
    {
        /* code */
        for ( j = 0; j < 3; j++)
        {
            /* code */
            printf("value[%d][%d]:",i,j);
            scanf("%d",&no[i][j]);
        }
    }
    printf("\nValue is:-\n");
    for ( i = 0; i < 3; i++)
    {
        /* code */
        for ( j = 0; j < 3; j++)
        {
            /* code */
            printf("\nvalue[%d][%d]:\t%d",i,j,no[i][j]);
        }
        
    }
    
    
}
