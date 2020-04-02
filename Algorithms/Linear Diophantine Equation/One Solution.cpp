#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,  int b,int & x,int & y)
{
	if(a==0)
	{
		x=0;
		y=1;
		return b;
	}
	int x1,y1;
	int d=gcd(b%a,a,x1,y1);
	x=y1-(b/a)*x1;
	y=x1;
	return d;
}
bool find_any_solution(int a,int b,int c,int& x0,int& y0,int& g)
{
	g=gcd(abs(a),abs(b),x0,y0);
	if(c%g)
	{
		return false;
	}
	x0*=c/g;
	y0*=c/g;
	if(a<0) x0=-x0;
	if(b<0) y0=-y0;
	return true;
}
int main()
{
	int t,a,b,c,g,x=0,y=0;
	cin>>t;
	while(t--)
	{
		cin>>a;
		cin>>b;
		cin>>c;
		bool ans=find_any_solution(a,b,c,x,y,g);
			if(ans)
			{
				cout<<x<<endl;
				cout<<y<<endl;
			}
			else
			{
				cout<<"no Solution"<<endl;
			}
	}
	return 0;
}

