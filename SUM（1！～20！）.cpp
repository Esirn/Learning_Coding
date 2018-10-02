#include<iostream>
using namespace std;
int main()
{
	int i;
	long long a=1,b=0;
	cout<<"SUM(1!~20!)\n=0";
	for(i=1;i<21;i++)
	{
		a*=i;
		b+=a;
		cout<<'+'<<a;
	}
	cout<<endl<<'='<<b<<endl;
	return 0;
}
