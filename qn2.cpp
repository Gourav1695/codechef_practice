#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n;
        float f = pow(0.143 * n, n);
        float b = floor(f);
        if ((f - floor(f)) < 0.5)
        {
            cout << floor(f) << endl;
        }
        else
        {
            cout << floor(f) + 1;
        }
    }
}