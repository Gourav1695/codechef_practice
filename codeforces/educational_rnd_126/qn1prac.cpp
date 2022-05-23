#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void merge(int arr1[], int arr2[], int n)
    {
        // code here
        int i = n - 1, j = 0;
        while (i >= 0 && j < n)
        {
            if (arr1[i] > arr2[j])
            {
                int temp = arr1[i];
                arr1[i] = arr2[j];
                arr2[j] = temp;
                i--;
                j++;
            }
            else
                break;
        }
        sort(arr1, arr1 + n);
        sort(arr2, arr2 + n);
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // int m = 0;
        // m = n;
        int arr1[n], arr2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n);
        for (int i = 0; i < n; i++)
        {
            cout << arr1[i] << " ";
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}

// sort(arr,arr+n);
// sort(arr2,arr2+n);
// for (int i = 0; i < n; i++)

// {
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
// for (int i = 0; i < n; i++)

// {
//     cout<<arr2[i]<<" ";
// }
// cout<<endl;