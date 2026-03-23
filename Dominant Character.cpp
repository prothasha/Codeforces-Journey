#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll n; string s; cin>>n>>s;
    int ans=-1;
    if(s.find("aa")!=string::npos) ans=2;
    else if(s.find("aca")!=string::npos||s.find("aba")!=string::npos) ans=3;
    else if(s.find("abca")!=string::npos||s.find("acba")!=string::npos) ans=4;
    else if(s.find("abbacca")!=string::npos||s.find("accabba")!=string::npos) ans=7;
    cout<<ans<<endl;
}
int main(){
    fastIO();
    ll t; cin>>t; while(t--)
    code();
}
