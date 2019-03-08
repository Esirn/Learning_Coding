#include<stdio.h>
int main()
{
	int i;
	long long a=1,b=0;
	printf("SUM(1!~20!)\n=0");
	for(i=1;i<21;i++)
	{
		a*=i;
		b+=a;
		//cout<<'+'<<a;
		printf("+%lld",a);
	}
	//cout<<endl<<'='<<b<<endl;
	printf("\n=%lld\n",b);
	return 0;
}
