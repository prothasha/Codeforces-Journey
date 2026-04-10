#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll n; cin>>n;
    //vector<ll>vec(n);
    //for(ll i=0; i<n; i++) cin>>vec[i];
    ll sum=0, k=0;
    while(sum<n){
        k++;
        sum+=k;
    }
    if(sum==n) cout<<k<<endl;
    else if(sum-n==1) cout<<k+1<<endl;
    else cout<<k<<endl;
}
int main(){
    fastIO();
    ll t; cin>>t; while(t--)
    code();
}

