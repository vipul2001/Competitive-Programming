#include <bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int n = n1+n2+n3;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    vector<int> ans;
    for(int i=0; i<n-1; i++){
        if(v[i] == v[i+1]){
            ans.push_back(v[i]);
            int x= v[i];
            while(i != n && v[i] == x){
                i++;
            }
            i--;
        }
    }
    cout<<ans.size()<<endl;
    for(auto x: ans){
        cout<<x<<endl;
    }
}
