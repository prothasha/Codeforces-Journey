#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
string base[6]={"abc","acb","bac","bca","cab","cba"};
void code(){
    ll n,m; cin>>n>>m;
    string s; cin>>s;
    vector<vector<int>>pref(6, vector<int>(n+1,0));
    for(int i=0; i<6; i++){
        for(int j=0; j<n; j++){
            pref[i][j+1]=pref[i][j]+(s[j]!=base[i][j%3]);
        }
    }
    while(m--){
        int l,r; cin>>l>>r;
        int ans=INT_MAX;
        for(int i=0; i<6; i++){
            ans=min(ans, pref[i][r]-pref[i][l-1]);
        }
        cout<<ans<<endl;
    }
}
int main(){
    fastIO();
    code();
}
