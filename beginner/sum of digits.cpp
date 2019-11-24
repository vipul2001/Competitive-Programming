#include <iostream>
using namespace std;
void sum(int n)
{
	int total=0;
	while(n!=0)
	{
		total=total+n%10;
		n=n/10;
	}
	cout<<total<<endl;
}
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		sum(n);
	}
	return 0;
}
