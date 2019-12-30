#include <iostream>
using namespace std;
int main()
{
	int n,k,c=0;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		if(a%k==0)
		c++;
	}
	cout<<c;
}
