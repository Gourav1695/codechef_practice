#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)

    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        
        int i = 0, j = 0;
        for (int k = 1; k < n; k++)
        {
            if(a[k] < a[i]) i = k;
            if(a[k] > a[j]) j = k;
        }
        cout<<i+1<<" "<<j+1<<endl;
        
    }
}