#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		if(n-k<k)
			k=n-k;
		int w[n];
		for(int i=0;i<n;i++)
		{
			cin>>w[i];
		}
		sort(w,w+n);
		int s=0;
		for(int i=0;i<n;i++)
		{
			if(i<k)
			{
				s=s-w[i];
			}
			else
			{
				s=s+w[i];
			}
		}
		cout<<abs(s);
	}
}
