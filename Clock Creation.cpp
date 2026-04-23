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
    for(ll p=2; p*p<=n; p++){
        if(n%p==0){
            ll val=1;
            while(n%p==0){
                n/=p;
                val*=p;
            }
            vec.push_back(val);
        }
    }
    if(n>1) vec.push_back(n);
    cout<<vec.size()<<endl;
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i];
        if(i+1==(int)vec.size()) cout<<endl;
        else cout<<" ";
    }
}
int main(){
    fastIO();
    ll t; cin>>t; while(t--)
    code();
}
