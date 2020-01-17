#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int m=0;
	int ans=0;
	while(n--)
	{
		int a;
		cin>>a;
		if(a==0)
		{
			m=0;
		}
		else
		{
			m++;
			if(m>ans)
			{
				ans=m;
			}
		}
	}
	cout<<ans<<endl;
}
