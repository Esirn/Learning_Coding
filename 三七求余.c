#include<stdio.h>
int main()
{
	int n;
	float s=0;
	printf("请输入一个数\n");
	scanf("%d",&n);
	for(;n>0;n--)
	{
		if(n%3==0||n%7==0)s += (float)1/n;
	}
	printf("%f",s);
	return 0;
}
