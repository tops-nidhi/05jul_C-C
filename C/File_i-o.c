#include<stdio.h>
void main()
{
    FILE* fptr;
    char str[20];
    int i=0;
    // fptr=fopen("D:/Nidhi batch/05july_C_C++/C/hello.c","w");
    // fprintf(fptr,"\nHello3");
    // fclose(fptr);
    fptr=fopen("D:/Nidhi batch/05july_C_C++/C/hello.c","r");
    
    while(fptr!=EOF)
    {
        fscanf(fptr,"%s",&str);
        printf("\n%s",str);
    }
}