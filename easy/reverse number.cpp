#include <iostream>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	int r;
	for(int i=0;i<t;i++)
	{
		r=0;
		cin>>n;
		while(n)
		{
			r=r*10+n%10;
			n=n/10;
		}
		cout<<r<<endl;
	}
}
