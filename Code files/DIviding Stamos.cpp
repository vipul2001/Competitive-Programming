#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int c[n];
	int s=0;
	for(int i=0;i<n;i++)
	{
		cin>>c[i];
		s+=c[i];
	}
	int a=0;
	for(int i=0;i<n;i++)
	{
		if(n*(n+1)/2==s)
		{
			a=1;
			break;
		}
	}
	if(a)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}
