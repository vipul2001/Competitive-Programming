#include <iostream>
using namespace std;
int main()
{
	int t,x;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>x;
		int b=x%10;
		while(x/10!=0)
		{
			x=x/10;
		}
		cout<<b+x<<endl;
	}
	return 0;
}
