#include <iostream>
#include <string>
using namespace std;
int main()
{
	int t,n;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>s;
		int c=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='1')
			{
				c++;
			}
		}
		cout<<c*(c+1)/2;
	}
	return 0;
}
