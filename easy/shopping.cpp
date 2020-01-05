#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int sum=0;
		int n;
		cin>>n;
		int c[n];
		for(int i=0;i<n;i++)
		{
			cin>>c[i];
		}
		sort(c,c+n,greater<int>());
		if(n%4==1)
		{
			for(int i=0;i<n-1;i++)
			{
				if(i%4==0)
				sum+=c[i]+c[i+1];
			}
			sum=sum+c[n-1];
		}
		if(n%4==2)
		{
			for(int i=0;i<n-2;i++)
			{
				if(i%4==0)
				sum+=c[i]+c[i+1];
			}
			sum=sum+c[n-1]+c[n-2];
		}
		if(n%4==3)
		{
			for(int i=0;i<n-3;i++)
			{
				if(i%4==0)
				sum+=c[i]+c[i+1];
			}
			sum=sum+c[n-3]+c[n-2];
		}
		if(n%4==0)
		{
			for(int i=0;i<n-3;i++)
			{
				if(i%4==0)
				sum+=c[i]+c[i+1];
			}
		}
		cout<<sum<<endl;
	
	}
}
