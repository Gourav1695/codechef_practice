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
        int pos = 0;
        // for (int i = 1; i <= N; i++)
        {
            if (pos >= 0)
            {
                pos = pos - i;
            }
            else
            {
                pos = pos + i;
            }
        }
        cout<<pos<<endl;
    }
}