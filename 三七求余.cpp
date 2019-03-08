#include<iostream>
using namespace std;
int main()
{
	int n;
	float s=0;
	printf("请输入一个数\n");
	cin>>n;
	for(;n>0;n--)
	{
		if(n%3==0||n%7==0)s += float(1)/n;
	}
	cout<<s;
	return 0;
}
