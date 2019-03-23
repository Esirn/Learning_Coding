#include<stdio.h>
int main()
{
	char name[30];
	int i=0,sum=0;
	
	printf("Please input the name by English: ");
	do{
		scanf("%c",&name[i]);
		sum += name[i];
	}while(name[i++]!='\n');
	
	printf("ASCII :\n");
	for(i=0;name[i]!='\n';i++)
	{
		printf("%c	%d\n",name[i],name[i]);
	}
	printf("\nThe sum of ASCII is : %d",sum);
	return 0;
}