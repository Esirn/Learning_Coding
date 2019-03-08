#include<stdio.h>
int main()
{
	int a,b,c[10];
	for(a=0;a<10;a++){
		c[a]=0;
	}
	for(a=0;a<10;a++)for(b=0;b<10;b++){
		printf("%d ",a*b);
		c[a*b/10]++;
		c[a*b%10]++;
	}
	for(a=0;a<10;a++){
		printf("c[%d]=%d\t%lf\n",a,c[a],(double)c[a]/200);
	}
	return 0;
}
