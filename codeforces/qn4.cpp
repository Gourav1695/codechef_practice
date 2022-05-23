#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)

    {
        int N, z, p;
        string str;
        cin >> N;
        cin >> str;
        z = count(str.begin(), str.end(), '0');
        p = count(str.begin(), str.end(), '1');
        if (z == p)
        {
            cout << z + p << endl;
        }
        else if (p > z)
        {
            cout << (2 * z + 1) << endl;
        }
        else if (z > p)
        {
            cout << (2 * p + 1) << endl;
        }
        else if (p == 0)
        {
            cout << "1" << endl;
        }
        else if (z == 0)
        {
            cout << "1" << endl;
        }
    }
}