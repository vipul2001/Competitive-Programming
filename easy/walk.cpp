#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,max=0;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			int w;
			cin>>w;
			if(max<w+i)
			{
				max=w+i;
			}
		}
		cout<<max-1<<endl;
	}
}
