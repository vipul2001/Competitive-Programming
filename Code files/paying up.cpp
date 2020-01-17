#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
int t;
cin>>t;
while(t--)
{
	int n,m,flag=1;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	ll lim=pow(2,n);
	for(int i=0;i<lim;i++)
	{
		ll sum=0;
		for(int j=0;j<n;j++)
		{
			if(i&(1<<j))
			sum+=a[j];
		}
		if(sum==m)
		{
		flag=1;
		break;
	}
		else
		flag=-1;
	}
	if(flag==1)
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
}
	return 0;	
	}
	

