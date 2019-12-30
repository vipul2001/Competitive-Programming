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
		int cnt=0;
		int m=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='<')
			{
				cnt++;
			}
			if(s[i]=='>')
			cnt--;
			if(cnt==0)
			m=i+1;
			if(cnt<0)
			break;
		}
		cout<<m;
	}
}
