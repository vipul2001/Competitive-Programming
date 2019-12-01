#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		double p,s;
		cin>>p>>s;
		double h1=(p+sqrt(p*p-24*s))/12;
     double h2=(p-sqrt(p*p-24*s))/12;
     double s1=(2*s-h1*(p-4*h1))/4;
     double s2=(2*s-h2*(p-4*h2))/4;
     double v1=s1*h1;
     double v2=s2*h2;
     if(v1>v2)
        cout<<fixed<<setprecision(2)<<v1<<endl;
     else
        cout<<fixed<<setprecision(2)<<v2<<endl;

	}
}
