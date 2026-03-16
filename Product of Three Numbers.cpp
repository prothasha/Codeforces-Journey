#include<bits/stdc++.h>
#define ll long long
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll n; cin>>n;
    vector<ll>vec;
    ll x=n;
    for(ll i=2; i*i<=x && vec.size()<2; i++) {
        if(x%i==0) {
            vec.push_back(i);
            x/=i;
        }
    }
    if(vec.size()<2 || x==vec[0] || x==vec[1]) cout<<"NO"<<endl;
    else {
        cout<<"YES"<<endl;
        cout<<vec[0]<<" "<<vec[1]<<" "<<x<<""<<endl;
    }
}

int main(){
    p();
    ll t; cin>>t; while(t--)
    code();
}
