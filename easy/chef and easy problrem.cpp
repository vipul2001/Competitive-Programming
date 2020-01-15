#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define li unsigned long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        li arr[n];
        for(int i=0; i<n;i++) cin>>arr[i];
        sort(arr,arr+n);
        li ans=0;
        for(int i=n-1; i>=0; i-=2) ans+=arr[i];
        cout<<ans<<"\n";
    }
    return 0;
}
