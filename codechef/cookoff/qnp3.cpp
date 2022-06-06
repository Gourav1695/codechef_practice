
#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int start,
                  int end)
{
    while (start < end)
    {
        std::swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rightRotate(int arr[], int d, int n)
{

    d = d % n;
    reverseArray(arr, 0, n - 1);
    reverseArray(arr, 0, d - 1);
    reverseArray(arr, d, n - 1);
}

// driver code

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int x = 0;
        cin >> n;
        int arr[n] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int k = 1;
        for (int i = 0; i < n; i++)
        {

            rightRotate(arr, k, n);
            x = max(x, arr[0] + arr[n - 1]);
        }
        cout << x << endl;
        // printArray(arr, n);
    }
    return 0;
}