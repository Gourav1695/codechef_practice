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
        int n, k;
        char s[1000];
        cin >> n >> k;
        scanf("%s", &s);
        // for (int i = 0; i < n; i++)
        // {
        //     cin >> arr[i];
        // }
        int c = 0;
        for (int i = 0, j = n - 1; i < j; i++, j--)
        {
            if (s[i] != s[j])
            {
                c++;
            }
        }
        cout << c;
        if (c <= k)
        {
            if (n % 2 == 1)
            {
                cout << "Yes" << endl;
            }
            else if ((k - c) % 2 == 0)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else
        {
            cout << "No" << endl;
        }
    }
}