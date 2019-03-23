#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("Input 3 numbers, like: 1 2 3\n");
	scanf("%d %d %d",&a,&b,&c);
	max = a>b?a:b;
	max = max>c?max:c;
	printf("max: %d",max);
	return 0;
}