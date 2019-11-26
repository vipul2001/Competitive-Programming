#include <iostream>
#include <string>
using namespace std;
int main()
{
	int t;
	string s;
	cin>>t;
	while(t--)
	{
		cin>>s;
		if((s.find("010")+1)||(s.find("101")+1))
		cout<<"Good";
		else
		cout<<"Bad";
	}
}
