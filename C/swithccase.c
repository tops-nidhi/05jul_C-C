#include<stdio.h>
int main()
{
    int ch;
    printf("1.English\n2.Hindi\n3.Gujrati\n");
    printf("\nEnter your choice:"); 
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("How are you?");
            break;

        case 2:
            printf("Kaise ho?");
            break;
        
        case 3:
            printf("Kem chho?");
            break;
        
        default:
        	printf("Enter valid choice.....");
        	break;
    }
}
