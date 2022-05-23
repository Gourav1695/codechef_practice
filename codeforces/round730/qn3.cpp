
#include <bits/stdc++.h>
using namespace std;

int main()
{

    {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + N);
        if ((arr[N - 1] >= 0) || (arr[N - 1] <= 3979))
        {
            cout << "25"<< endl;
        }

        cout << N << endl;
    }
}