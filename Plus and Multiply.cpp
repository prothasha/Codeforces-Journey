#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll n,a,b;
    cin>>n>>a>>b;
    bool ok=false;
    if(a==1){
        if((n-1)%b==0) ok=true;
    }
    else{
        ll val=1;
        while(val<=n){
            if((n-val)%b==0){
                ok=true;
                break;
            }
            val*=a;
        }
    }
    if(ok) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    fastIO();
    ll t;cin>>t;while(t--)
    code();
}

