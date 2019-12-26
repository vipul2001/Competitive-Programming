#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
	string s = "";
			cin >> s;
			const size_t f = count(s.begin(), s.end(), '4');
			const size_t n = count(s.begin(), s.end(), '7');
			cout << s.size() - f - n << endl;
	}
}
