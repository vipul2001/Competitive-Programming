#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int ii=0;
		for(int i=1;i<n;i++)
		{
			if(a[i]>a[i-1])
			ii++;
		}
		int ij=0;
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				ij++;
			}
		}
		if(ii==ij)
		cout<<"YES";
		else
		cout<<"NO";
		}
}
