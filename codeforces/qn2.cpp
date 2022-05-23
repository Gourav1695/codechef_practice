#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)

    {
        int n;
        int arr1[n], arr2[n];
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> arr2[j];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr1[i] == arr2[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }
}