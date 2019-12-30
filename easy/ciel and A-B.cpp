#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a,b;
	cin>>a;
	cin>>b;
	int c=abs(a-b);
	if(c%10==9)
	{
		c=c-1;
	}
	else
	{
		c++;
	}
	cout<<c;
}
