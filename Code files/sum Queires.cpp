#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	int m;
	cin>>m;
	while(m--)
	{
		long long int w;
		cin>>w;
		if(w<n+2)
		{
			cout<<0<<endl;
		}
		else if(w>3*n)
		{
			cout<<0<<endl;
		}
		else
		{
			cout<<n-abs(2*n+1-w)<<endl;
		}
	}
}
