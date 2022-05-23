// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         long long int l, r, c;
//         cin >> l >> r >> c;
//         // for (int i = l; l <= u; i++)
//         // {
//         //     arr[i] = floor(l / c) + l % c;
//         //     l++;
//         //     sort(arr, arr + u + 1);
//         //     // return arr[u];
//         // }
//         // cout << arr[u] << endl;
//         if (l / c < r / c)
//         {
//              cout << ( r / c - 1 + c - 1,r / c + r % c) << endl;
           
//         }
//         else
//         {
//             cout << r / c + r % c << endl;
//         }
//     }

//     return 0;
// }
    #include<bits/stdc++.h>
    using namespace std;
    void solve()
    {
    		int l,r,a;
    		cin>>l>>r>>a;
			if (l>=r&&l>=a)
			{
				cout<<l<<endl;
			}
			else if (r>=l&&r>=a)
			{
				cout<<r<<endl;
			}
			else if (a>=l&&a>=r)
			{
				cout<<a<<endl;
			}
			
    		
    }
    int main()
    {
    	int t;
    	cin>>t;
    	while(t--)
    	solve();
    }