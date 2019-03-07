#include<stdio.h>
long long jc(int k)//返回k!。
{
	if(k!=1)return k*jc(k-1);
	else return 1;
}
int main()
{
	long long temp=0;
	double S=0;
	int i;
	//这道题仅用 long 作数据类型是不够的，应该用long long。 
	for(i=1;i<20;i+=3)
	{
		temp += jc(i);
		printf("temp=%lld\n",temp);
		S += (double)1/temp;
	}
	
	printf("S=%lf",S);
	return 0;
}
