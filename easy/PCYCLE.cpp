#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	    b[i]=a[i];
	}
	int i=0;
	int k=0;
	int count=0;
	while(k<n)
	{
	    if(a[k]!=-1)
	    {
	        i=k;
    	    while(a[i]!=-1)
    	    {
    	        int j=i;
    	        i=a[i]-1;
    	        a[j]=-1;
    	    }
    	    count++;
	    }
	    k++;
	}
	cout<<count<<endl;
	i=0;k=0;
	while(k<n)
	{
	    if(b[k]!=-1)
	    {
	        i=k;
    	    while(b[i]!=-1)
    	    {
    	        cout<<i+1<<" ";
    	        int j=i;
    	        i=b[i]-1;
    	        b[j]=-1;
    	    }
    	    cout<<i+1<<endl;
	    }
	    k++;
	}
	return 0;
}
