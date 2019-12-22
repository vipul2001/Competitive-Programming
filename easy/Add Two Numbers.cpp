#include<iostream>
using namespace std;
int main()
{
	int t,a,b;
	cin>>t;
	int c[t];
	for(int i=0;i<t;i++)
	{
		cin>>a>>b;
		c[i]=a+b;
	}
	for(int i=0;i<t;i++)
	{
		cout<<c[i]<<'\n';
	}
	return 0;
}
