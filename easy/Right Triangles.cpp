#include <iostream>
#include <bits\stdc++.h>
#include <cmath>
using namespace std;
double dist(int x1,int y1,int x2,int y2)
{
	double d=pow(x1-x2,2)+pow(y1-y2,2);
	return (d);
}
int main()
{
	int n;
	cin>>n;
	int x1,y1,x2,y2,x3,y3;
	double d[3];
	for(int i=0;i<n;i++)
	{
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		int a=dist(x1,y1,x2,y2);
		int b=dist(x3,y3,x2,y2);
		int c=dist(x3,y3,x1,y1);	
		if((a+b==c)||(b+c==a)||(c+a==b))
		{
			cout<<"YES"<<endl;
		}
		else
		cout<<"NO"<<endl;
	}
}
