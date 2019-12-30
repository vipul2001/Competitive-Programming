#include <iostream>
using namespace std;
int main()
{
	int w,t,a,b,s=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>a>>b;
		if(a>b)
		{
			if(a-b>s)
			{
				s=a-b;
				w=1;
			}
		}
		else
		{
			if(b-a>s)
			{
				s=b-a;
				w=2;
			}
		}
	}
	cout<<w<<s;
	return 0;
}
