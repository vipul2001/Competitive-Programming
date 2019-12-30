#include <iostream>
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int t;
	string m;
	cin>>t;
	cin>>m;
	string u=m;
	string l=m;
    transform(u.begin(), u.end(), u.begin(), ::toupper);
    transform(l.begin(), l.end(), l.begin(), ::tolower);
	while(t--)
	{
		string s;
		cin>>s;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='_')
			{
				cout<<" ";
			}
			else if((65<=s[i])&&(s[i]<=90))
			{
				cout<<u[s[i]-65];
			}
			else if((97<=s[i])&&(s[i]<=122))
			{
				cout<<l[s[i]-97];
			}
			else
			{
				cout<<s[i];
			}
		}
		cout<<endl;
	}
}
