#include<stdio.h>
int main()
{
	char a;
	printf("Please input the small letter:");
	scanf("%c",&a);
	if(a>='a' && a<='z')
		printf("%c",a-32);
	else printf("Error: Not small letter!");
	return 0;
}