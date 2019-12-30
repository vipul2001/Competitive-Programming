#include <iostream>
using namespace std;
int a,n,k;
int main() {
	// your code goes here
	cin>>a>>n>>k;
	while(k--){
	    cout<<a%(n+1)<<" ";a=a/(n+1);
	}
	return 0;
}

