#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        for (int i = 1; i < n - 1; i++)
        {
            if (b[i] > b[i - 1] && b[i] > b[i + 1])
            {
                b[i + 1] = b[i];
            }
        }
        int c;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                c++;
            }
            cout << c << endl;
            for (int i = 0; i < n; i++)
            {
                cout << b[i];
            }
            cout << endl;
        }
    }
}
