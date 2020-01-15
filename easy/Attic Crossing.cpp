#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int max=0;
		int c=0;
		int j=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='.')
			{
				j++;
			}
			if(s[i]=='#')
			{
				if(max<j)
				{
					c++;
					max=j;
				}
				j=0;
			}
		}
		cout<<c<<endl;
	}
}
