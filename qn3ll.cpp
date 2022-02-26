#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{

    int t;
    cin >> t;
    int arr[50];
    int N;
    int a;
    int count = 0;
    int x = 0;

    while (t--)
    {
        cin >> N;
        // vector<int> v;
        // // we can also mention size here like
        // // vector<int> v(n);
        // for (int i = 0; i < N; i++)
        // {
        //     cin >> a;
        //     v.push_back(a);
        // }
         for (int m = 0; m < N; m++)
        {
            cin>>arr[m];
        }
        for (int j = 0; j < N; j++)
        {
            x = j + count + 1;
            if (x == arr[j])
            {
                count++;
            }
        }
        cout << count << endl;
    }
}
