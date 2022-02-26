#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);
    int t;
    cin >> t;
    int X;
    char C, N, D;
    string s;
    int m, n;
    for (int i = 0; i < t; i++)
    {

        cin >> X;
        int count, ans;

        cin >> s;
        n = std::count(s.begin(), s.end(), 'C');
        // size_t n = std::count(s.begin(), s.end(), 'C');
        m = std::count(s.begin(), s.end(), 'N');
        // cout << n << endl;

        // cout << ans << " " << count << endl;
        if (m > n)
        {
            cout << 40 * X << endl;
        }
        else if (n > m)
        {
            cout << 60 * X << endl;
        }
        else if (n == m)
        {
            cout << 55 * X << endl;
        }
    }
}

// return 0;
// }
// (cin, str1);
// for (int i = 0; i < 14; i++)
// {
//     if (str1[i] = N)
//     {
//         count++;
//         cout << count;
//     }
//     if (str1[i] = C)
//     {
//         ans++;
//         cout << ans;
//     }