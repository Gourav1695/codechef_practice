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
        int n;
        cin >> n;
        int arr1[n];
        int arr2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i] >> arr2[i];
        }
        int count = 0;
        int ans = 0;
        sort(arr1, arr1 + n);
        sort(arr2, arr2 + n);
        for (int i = 0; i < n; i++)
        {
            // for (i = 0; i < n - 1 && arr1[i] == arr1[i + 1]; i++)
                while (i < n - 1 && arr1[i] == arr1[i + 1])
                    i++;

            count++;
        }
        // for (int i = 0; i < n; i++)
        // {
        //     for (i = 0; i < n - 1 && arr2[i] == arr2[i + 1]; i++)
        //     {
        //         ans++;
        //     }
        // }
         for (int i = 0; i < n; i++)
        {
            // for (i = 0; i < n - 1 && arr1[i] == arr1[i + 1]; i++)
                while (i < n - 1 && arr2[i] == arr2[i + 1])
                    i++;

            ans++;
        }
        cout << ans + count << endl;
    }
    return 0;
}