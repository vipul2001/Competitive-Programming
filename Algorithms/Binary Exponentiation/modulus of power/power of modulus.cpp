# include <iostream>
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

int main()
{
	int c=0;
	cin>>c;
		while(c--)
	{
		long long a,b,m;
		cin>>a>>b>>m;
		long long ans=mod(a,b,m);
		
		cout<<ans;
	}
	}

