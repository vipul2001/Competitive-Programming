#include <bits\stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a;
		set<int> v;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			v.insert(a);
		}
		cout<<v.size()<<endl;
	}
}
