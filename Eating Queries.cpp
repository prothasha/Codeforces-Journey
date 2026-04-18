#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int n, q; cin>>n>>q;
    vector<ll>vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    sort(vec.rbegin(),vec.rend());
    vector<ll>pr(n);
    pr[0]=vec[0];
    for(int i=1; i<n; i++) pr[i]=pr[i-1]+vec[i];
    while(q--){
        ll x; cin>>x;
        auto it=lower_bound(pr.begin(),pr.end(),x);
        if(it==pr.end()) cout<<-1<<endl;
        else cout<<it-pr.begin()+1<<endl;
    }
}
int main(){
    fastIO();
    int t; cin>>t; while(t--)
    code();
}

