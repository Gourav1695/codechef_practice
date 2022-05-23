
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)

    {
        int N;
        cin >> N;
        int arr[N];
        for (int i=0; i < N; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + N);

        if ((N == 1)&&(arr[0]>1))
        {
            cout << "NO" << endl;
        }
        else if ((arr[N - 1] - arr[N - 2]) >= 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
