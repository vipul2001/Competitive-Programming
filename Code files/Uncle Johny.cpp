#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,i,k,n,num;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int arr[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    cin>>k;
	    num=arr[k-1];
	    sort(arr,arr+n);
	    for(i=0;i<n;i++)
	    {
	        if(arr[i]==num)
	        {
	            cout<<i+1<<endl;
	            break;
	        }
	    }
	}
	return 0;
}

