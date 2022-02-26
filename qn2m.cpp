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
        cin >> n >> k;
        // if (k==0)
        // {

        //     cout<<"0"<<endl;
        // }

        if (n < k)
        {
            // cout <<k%n-1<<endl;
            cout << k - n - 1 << endl;
        }
        else if (n >= k)
        {
            cout << k << endl;
        }
    }
}