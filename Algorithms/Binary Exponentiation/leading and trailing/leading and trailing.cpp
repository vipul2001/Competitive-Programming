#include <iostream>
using namespace std;
long long mod(long long a,long long b,long long m)
{
	
	a%=m;
	long long res=1;

	while(b>0)
	{
		if(b&1)
		{
			res=res*a%m;
		}
		a=a*a%m;
		b>>=1;
	}
	return res;
}
long long binpow(long long a,long long b)
{
	long long res=1;

	while(b>0)
	{
		if(b&1)
		{
			res=res*a;
		}
		a=a*a;
		b>>=1;
	}
	return res;
}
int main()
{
	long long a,b;
	int c;
	cin>>c;
	while(c--)
	{
		cin>>a;
		cin>>b;
		long long ans=binpow(a,b);
		long long last=mod(a,b,1000);
		while(ans>1000)
			ans/=10;
		cout<<ans<<"...";
		cout<<last<<endl;
	}
}

