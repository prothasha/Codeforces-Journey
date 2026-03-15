#include<bits/stdc++.h>
#define ll long long
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll n; cin>>n;
    vector<ll>vec(n);
    for(ll i=0; i<n; i++) cin>>vec[i];

    ll L=1;
    for(ll i=0; i<n; i++) L=lcm(L,vec[i]);

    vector<ll>vec2(n);
    ll sum=0;
    for(ll i=0; i<n; i++){
        vec2[i]=L/vec[i];
        sum+=vec2[i];
    }
    if(sum>=L){
        cout<<-1<<endl;
        return;
    }
    for(ll i=0; i<n; i++) cout<<vec2[i]<<" ";
    cout<<endl;
}
int main(){
    p();
    ll t;
    cin>>t;
    while(t--) code();
}
