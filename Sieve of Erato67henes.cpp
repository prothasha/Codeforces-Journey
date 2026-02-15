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
    bool ok=false;
    for(int i=0; i<n; i++) {
        if(vec[i]==67) {
            ok=true;
            break;
        }
    }
    if(ok) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    p();
    int t; cin>>t;
    while(t--) code();
}
