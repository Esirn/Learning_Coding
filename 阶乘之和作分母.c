#include<stdio.h>
long long jc(int k)//����k!��
{
	if(k!=1)return k*jc(k-1);
	else return 1;
}
int main()
{
	long long temp=0;
	double S=0;
	int i;
	//�������� long �����������ǲ����ģ�Ӧ����long long�� 
	for(i=1;i<20;i+=3)
	{
		temp += jc(i);
		printf("temp=%lld\n",temp);
		S += (double)1/temp;
	}
	
	printf("S=%lf",S);
	return 0;
}
