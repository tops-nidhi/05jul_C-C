#include<stdio.h>
int main()
{
	int i;
	for(i=0;i<10;i++)
	{
		if (i==5)
		{
			goto done;
		}
		printf("%d\n",i);
	}
	done:
		printf("This is the lable.");
}
