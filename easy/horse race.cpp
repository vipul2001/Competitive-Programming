#include<iostream>
#include<math.h>
using namespace std;
int T, n, vect[5005];
int difference;

int main()
{
	cin >> T;
	for (int i = 1; i <= T; i++)
	{
		cin >> n;
		for (int it = 1; it <= n; it++)
		{
			cin >> vect[it];
		}
		int diffMin = 1000000000;
		for (int it = 1; it < n; it++)
		{
			for (int jt = it + 1; jt <= n; jt++)
			{
			    difference = abs(vect[it] - vect[jt]);
				if (difference < diffMin)
				{
					diffMin = difference;
				}

			}
			
		}

		cout << diffMin << endl;
	}
	return 0;

}
