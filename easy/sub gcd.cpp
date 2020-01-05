#include <bits\stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int gc=0;
		
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			gc=(i==0)?x:__gcd(gc,x);
			//cout<<(gc);
		
		}
		if(gc==1)
		{
			cout<<n<<endl;
		}
		else
		{
			cout<<-1<<endl;
		}
	}
}
