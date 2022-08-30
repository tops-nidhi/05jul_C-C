#include<stdio.h>
union stdata
{
	int id;
	char nm;
}st;
int main()
{
//	struct stdata st;
printf("Enter student name:");
	scanf("%c",&st.nm);
	printf("Enter student id:");
	scanf("%d",&st.id);
	
	printf("\nYour student id is:%d",st.id);
	printf("\nYour student name is:%c",st.nm);
	return 0;
}
