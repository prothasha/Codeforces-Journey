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
    if(n==2) {
        cout<<-1<<endl;
        return;
    }
    vector<ll>vec;
    ll p=n*n;
    ll ind=0;
    for(int i=1; i<=p; i+=2) vec.push_back(i);
    for(int i=2; i<=p; i+=2) vec.push_back(i);
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<<vec[ind]<<" ";
            ind++;
        }
        cout<<endl;
    }
}
int main(){
    fastIO();
    ll t; cin>>t; while(t--)
    code();
}
