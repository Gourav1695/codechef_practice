#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 998244353;
const ll MOD = 998244353;
typedef pair<ll,ll> ii;
#define iii pair<ii,ll>
#define f(i,a,b) for(ll i = a;i < b;i++)
#define pb push_back
#define vll vector<ll>
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
///I hope I will get uprating and don't make mistakes
///I will never stop programming
///sqrt(-1) Love C++
///Please don't hack me
///Gourav Yo
///Think different approaches (bs,dp,greedy,graphs,shortest paths,mst)
///Stay Calm
///Look for special cases
///Beware of overflow and array bounds
///Think the problem backwards
///Training
int main(void){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        iii arr[m];
        f(i,0,m){
            cin>>arr[i].F.S>>arr[i].F.F;
            arr[i].S = i+1;
        }
        sort(arr,arr+m);
        ll ans = 0;
        vector<ii>ex;
        f(i,0,2*n){
            ans += arr[i].F.F;
            ex.pb(ii(arr[i].F.S,arr[i].S));
        }
        sort(all(ex));
        cout<<ans<<"\n";
        f(i,0,n){
            cout<<ex[i].S<<" "<<ex[2*n - i - 1].S<<"\n";
        }

    }
}

