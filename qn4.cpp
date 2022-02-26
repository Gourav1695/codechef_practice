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
        int n, k;
        int c1=0, c0=0;
        char s[1000];
        cin >> n;
        scanf("%s", &s);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                c1++;
            }
            else
            {
                c0++;
            }
        }
        if (n % 2 == 0)
        {

            if ((c0 == c1))
            {
                cout << "YES" << endl;
            }
            else if (c0 % 2 == 0 && c1 % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
        }
        }
}