#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string a;
		cin>>a;
		bool b[n]={0};
		for(int i=0;i<a.length();i++)
		{
			
			if(i==0)
			{
				if(a[0]=='1')
				{
					b[0]=1;
					b[1]=1;
				}
			}
			if(i==n-1)
			{
				if(a[i]=='1')
				{
					b[n-1]=1;
					b[n-2]=1;
				}
				
			}
			else
			{
				if(a[i]=='1')
				{
					b[i]=1;
					b[i-1]=1;
					b[i+1]=1;
				}
			}
		}
		int c=0;
		for(int i=0;i<n;i++)
		{
			if(b[i]==1)
			{
				c++;
			}
		}
		cout<<n-c<<endl;
	}
}
