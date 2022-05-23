#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)

    {
        int l,r,k;
        cin>>l>>r>>k;
        if(l==1 and r==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else if (l==r)
        {
            cout<<"YES"<<endl;
            continue;
        }
        int num=(r-l+1);//the total count of numbers in the range[L,R]
        int cost=num/2;
        if(r%2==1 and l%2==1)
        cost++;
        cout<<(cost<=k?"YES":"NO")<<endl;
    }
        return 0;
}