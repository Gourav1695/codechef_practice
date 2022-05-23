#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    
    {
        long long int n,B,x,y;
        cin>>n>>B>>x>>y;
        long long int k=0;
        long long int ans=0;
        while(n--){
            if(k+x>B){
                k-=y;
            }else{
                k+=x;
            }
            ans+=k;
        }
        cout<<ans<<endl;

    }
}