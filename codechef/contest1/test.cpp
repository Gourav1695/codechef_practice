#include <bits/stdc++.h>
using namespace std;

void solution()
{
    long long n, x;
    long long ans = 0;
    cin >> n>>x;
    long long arr[x];
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + x);
    for (int i = 0; i < n; i++)
    {
        ans = arr[i] + ans;
    }
    cout << ans << endl;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
        solution();
    return 0;
}
