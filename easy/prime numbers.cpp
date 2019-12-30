#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << endl
#define fast                          \
	ios_base::sync_with_stdio(false); \
	cin.tie(NULL);
#define FOR(i,n) for(int i(0);i<n;++i)
#define ASC(i,a,b) for(int i(a); i <=b; ++i)
#define DESC(i,a,b) for(int i(a);i>=b;i--)
#define WL(t) while(t--)
#define SZ(a) int((a).size())
#define PB push_back
#define MP make_pair
#define FF first
#define SS second
#define BB begin()
#define EE end()
#define all(c) c.BB, c.EE
#define present(container, element) (container.find(element) != container.end())
// ^^for set,map etc
#define cpresent(container, element) (find(all(container), element) != container.end())
// for vector,array etc
#define tr(container, it) for (auto it = container.begin(); it != container.end(); it++)
#define gcd(a, b) __gcd((a), (b))
#define lcm(a, b) ((a) * (b)) / gcd((a), (b)) 
typedef long long LL;
const float INF = numeric_limits<float>::infinity();
const int MOD = 1e9 + 7;
const double PI = 3.14159265358979323846264338;
 
#ifdef _DEBUG
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif

bool primecheck(int n){
	if(n==1){
		return 0;
	}
	else{
	for(int i(2);i*i<=n;++i){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
	}
}

int main(){
	fast;
	int t;
	cin >> t;
	WL(t){
		LL m,n;
		cin >> m >> n;
		for(int i(m);i<=n;++i){
			if(primecheck(i)){
				cout << i << '\n';
			}
		}
		cout << '\n';
	}


}

