#include<iostream>
using namespace std;
int main()
{
	int a,b,c[10];
	for(a=0;a<10;a++){
		c[a]=0;
	}
	for(a=0;a<10;a++)for(b=0;b<10;b++){
		cout<<a*b<<" ";
		c[a*b/10]++;
		c[a*b%10]++;
	}
	for(a=0;a<10;a++){
		cout<<"c["<<a<<"]="<<c[a]<<"\t"<<double(c[a])/200<<endl;
	}
	return 0;
}