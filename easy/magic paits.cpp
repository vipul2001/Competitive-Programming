#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		vector<long long int> v(n);
		for(long long int i=0; i<n; i++)
		{
            cin>>v[i];
        }
        long long int count; 
    sort(v.begin(), v.end()); 
    count = std::distance(v.begin(), std::unique(v.begin(), v.begin()+n));
    cout<<count*(count-1)/2<<endl;
	}
}
