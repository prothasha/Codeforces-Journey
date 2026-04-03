#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll n, W; cin>>n>>W;
    vector<int>c(20,0);
    for(ll i=0; i<n; i++){
        int w; cin>>w;
        int p=0;
        while((1<<p)<w) p++;
        c[p]++;
    }
    int h=0;
    while(n>0){
        ll x=W;
        for(int i=19; i>=0; i--){
            while(c[i]>0 && (1LL<<i)<=x){
                x-=(1LL<<i);
                c[i]--;
                n--;
            }
        }
        h++;
    }
    cout<<h<<endl;
}
int main(){
    fastIO();
    ll t; cin>>t; while(t--)
    code();
}
