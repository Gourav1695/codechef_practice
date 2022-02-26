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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum | a[i];
        }
        cout << sum << endl;
    }
}
