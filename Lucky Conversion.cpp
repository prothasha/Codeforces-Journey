#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    string a,b; cin>>a>>b;
    ll x=0,y=0;
    for(ll i=0; i<(ll)a.size(); i++){
        if(a[i]!=b[i]){
            if(a[i]=='4') x++;
            else y++;
        }
    }
    cout<<max(x,y)<<endl;
}
int main(){
    fastIO();
    code();
}
