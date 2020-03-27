#include <iostream>
using namespace std;
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
   return res;
}
int main()
{
	long t,a,b;
	cin>>t;
	while(t--)
	{
	
	cin>>a;
	cin>>b;
	cout<<binpow(a,b)<<endl;

}
}
