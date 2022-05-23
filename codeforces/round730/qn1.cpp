#include <typeinfo>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)

    {
        int N, X;
        cin >> N >> X;
        if (N == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << (2 * X + N + 1) << endl;
        }
    }
    return 0;
}
