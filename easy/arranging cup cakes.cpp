#include <iostream>
#include <bits\stdc++.h>
using namespace std;
int main()
{
	int t;
	int n;
	int ans;
	cin>>t;
	
	while(t--)
	{
		cin>>n;
		ans=n;
		for(int i=1;i<sqrt(n);i++)
		{
			if(n%i==0)
			{
				int y=n/i;
				ans=min(ans,abs(y-i));
			}
		}
		cout<<ans<<endl;
	}
}
