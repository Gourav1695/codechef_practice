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
        cin >> n>>m;
       
        if (n/2<=m)
        {
            cout <<n/2<<endl;
        }
        else
        {
              cout <<m<<endl;
        }
    }
}