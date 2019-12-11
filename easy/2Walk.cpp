#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		int s=0;
		cin>>n;
		for(int i=0;i<=n;i++)
		{
			int w;
			cin>>w;
			if(w+i>s)
			{
				s=w+i;
			}
		}
		cout<<s<<endl;
		
	}
}
