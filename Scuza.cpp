#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int n,q; cin>>n>>q;
    vector<long long>vec(n), pref(n), max1(n);
    for(int i=0; i<n; i++){
        cin>>vec[i];
        if(i==0)pref[i]=vec[i];
        else pref[i]=pref[i-1]+vec[i];
    }
    max1[0]=vec[0];
    for(int i=1; i<n ;i++) max1[i]=max(max1[i-1],vec[i]);
    while(q--){
        long long k; cin>>k;
        int idx=upper_bound(max1.begin(),max1.end(),k)-max1.begin();
        if(idx==0) cout<<0<<" ";
        else cout<<pref[idx-1]<<" ";
    }
    cout<<endl;
}
int main(){
    p();
    int t; cin>>t; while(t--) code();
}
