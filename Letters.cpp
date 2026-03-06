#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    long long n, m; cin>>n>>m;
    vector<long long>vec(n);
    for(long long i=0; i<n; i++) cin>>vec[i];
    vector<long long>val(m);
    for(long long i=0; i<m; i++) cin>>val[i];
    vector<long long>pref(n);
    pref[0]=vec[0];
    for(long long i=1; i<n; i++) pref[i]=vec[i]+pref[i-1];
    for(long long i=0; i<m; i++) {
        long long x=val[i];
        long long b=lower_bound(pref.begin(), pref.end(), x)-pref.begin();
        cout<<b+1<<" ";
        if(b==0) cout<<x<<endl;
        else cout<<x-pref[b-1]<<endl;
    }
}
int main(){
    p();
    //int t; cin>>t; while(t--)
    code();
}
