// Simon St James (ssjgz) - 2019-12-07
//
// Solution to: https://www.codechef.com/problems/DECSTR
//
#include<iostream>
#include<algorithm>
#include<cassert>

using namespace std;

template <typename T>
T read()
{
    T toRead;
    cin >> toRead;
    assert(cin);
    return toRead;
}

string computeMinString(int K)
{
    // For efficiency, build the string backwards.
    string s;
    while (K > 0)
    {
        s += static_cast<char>('a' + (s.size() % 26));
        if (s.size() >= 2)
        {
            // Going backwards, remember, so we compare the adjacent characters
            // in the opposite order!
            if (s[s.size() - 1] > s[s.size() - 2])
            {
                K--;
            }
        }
    }
    reverse(s.begin(), s.end());
    return s;
}

int main(int argc, char* argv[])
{
    if (argc == 2 && string(argv[1]) == "--test")
    {
        // Exhaustive testcase generator.
        for (int K = 1; K <= 100; K++)
        {
            cout << "Q: 2 lines" << endl;
            cout << 1 << endl;
            cout << K << endl;
            cout << "A: 1 lines" << endl;
            cout << computeMinString(K) << endl;
        }
        return 0;
    }
    const int T = read<int>();

    for (int t = 0; t < T; t++)
    {
        const int K = read<int>();
        const auto s = computeMinString(K);

        cout << s << endl;
    }
}


