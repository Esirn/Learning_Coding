#include<stdio.h>
bool IsContain(int i)
{
	if(i/100==3 || i/10%10==3 || i%100==3)
		return 1;
	else
		return 0;
}
int main()
{
	int i=200,sum=0;
	printf("200~700��Χ�ڣ�7�ı����Ұ������֡�3��������֮��Ϊ��\n0",i);
	for(;i<701;i++)
	{
		if(i%7==0 && IsContain(i))
		{
			sum += i;
			printf("+%d",i);
		}
	}
	printf("=%d",sum);
	return 0;
}
