#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T > 0)
	{
		T--;
		bool found = false;
		int X, Y, K, N;
		cin >> X >> Y >> K >> N;
		int remaining = (X - Y);
		for (int i = 0; i < N; i++)
		{
			int Pi, Ci;
			cin >> Pi >> Ci;
			if (!found && (remaining <= Pi) && (Ci <=  K))
			{
				found = true;
			}
		}
		cout << (found ? "LuckyChef" : "UnluckyChef") << '\n';
	}
	return 0;
}
