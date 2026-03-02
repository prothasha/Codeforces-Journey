#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int n; cin>>n;
    vector<int>vec(n);
    for(int i=0; i<n; i++) cin>>vec[i];
    int m; cin>>m;
    vector<int>q(m);
    for(int i=0; i<m; i++) cin>>q[i];

    vector<int>pref(n);
    pref[0]=vec[0];
    for(int i=1; i<n; i++) pref[i]=vec[i]+pref[i-1];

    for(int i=0; i<m; i++) {
        int w=q[i];
        int pi=lower_bound(pref.begin(), pref.end(), w)-pref.begin();
        cout<<pi+1<<endl;
    }
}
int main(){
    p();
    code();
}
