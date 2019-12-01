#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a;
		string s;
		cin>>a;
		cin>>s;
		if(a!=0)
		{
			int mod=0;
			for(int i=0;i<s.length();i++)
			{
				mod=(mod*10+s[i]-'0')%a;
			}
			cout<<__gcd(mod,a)<<endl;
		}
		else
		cout<<s<<endl;
	
	}
}
