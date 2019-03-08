#include<iostream>
using namespace std;
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
		cout<<"temp="<<temp<<endl;
		S += double(1)/temp;
	}

	cout<<"S="<<S;
	return 0;
}
