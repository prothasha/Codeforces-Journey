#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll n; cin>>n;
    vector<ll>vec;
    ll s=1, l=3*n;
    for(ll i=0; i<3*n; i++) {
        if(i%3==0) {
            vec.push_back(s);
            s++;
        }
        else {
            vec.push_back(l);
            l--;
        }
    }
    for(ll i=0; i<3*n; i++) cout<<vec[i] << " ";
    cout<<endl;
}
int main(){
    fastIO();
    ll t; cin>>t; while(t--)
    code();
}
