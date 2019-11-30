#include <bits\stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int w[n];
		for(int i=0;i<n;i++)
		cin>>w[i];
		int min=w[0];
		int s=0;
		for(int i=0;i<n;i++)
		{
			if(w[i]<min)
			min=w[i];
			s+=w[i];
		}
		cout<<(s-n*min)<<endl;
	}
}
