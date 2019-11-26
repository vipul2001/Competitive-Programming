#include <iostream>
#include <string>
using namespace std;
int main()
{
	int t;
	string s,j;
	cin>>t;
	while(t--)
	{
		cin>>j>>s;int k=0;
		for(int i=0;i<s.length();i++)
		{
			char c=s.at(i);
			if(j.find(c)+1)
			k++;
				
		}
		cout<<k<<endl;
	}
	
}
