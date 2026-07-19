#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll n, k; cin>>n>>k;
    vector<ll>vec;
    for(ll i=1; i*i<=n; i++) {
        if(n%i==0) {
            vec.push_back(i);
            if(i!=n/i) vec.push_back(n/i);
        }
    }
    sort(vec.begin(), vec.end());
    if(k<=vec.size()) cout<<vec[k-1];
    else cout<<-1;
}
int main(){
    fastIO();
    //ll t; cin>>t; while(t--)
    code();
}
