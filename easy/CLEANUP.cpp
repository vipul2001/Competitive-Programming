#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,i,k,j,*arr,*brr,a,b,flag,count;
	cin>>t;
	while(t--)
	{
	    k=0;
	    cin>>a>>b;
	    arr=(int*)malloc(b*sizeof(int));
	    for(i=0;i<b;i++)
	    {
	        cin>>arr[i];
	    }
	    brr=(int*)malloc((a-b)*sizeof(int));
	    for(i=1;i<=a;i++)
	    {
	        flag=0;
	        for(j=0;j<b;j++)
	        {
	            if(arr[j]==i)
	            {
	                flag=1;
	                break;
	            }
	        }
	        if(flag==0)
	        {
	            brr[k++]=i;
	        }
	    }
	    count=0;
	    for(i=0;i<k;i+=2)
	    {
	        count++;
	        cout<<brr[i]<<" ";
	    }
	    if(count==0)
	    cout<<" ";
	    count=0;
	    cout<<endl;
	    for(i=1;i<k;i+=2)
	    {
	        count++;
	        cout<<brr[i]<<" ";
	    }
	    if(count==0)
	    cout<<" ";
	    cout<<endl;
	}
	return 0;
}

