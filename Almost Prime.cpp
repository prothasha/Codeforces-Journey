#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int n; cin>>n;
    int ans=0;
    for(int i=1; i<=n; i++) {
        int nn=i;
        int sq=sqrt(nn);
        vector<int>pf;
        for(int j=2; j<=sq; j++) {
            if(nn%j==0) {
                pf.push_back(j);
                while(nn%j==0) nn/=j;
            }
        }
        if(nn>1) pf.push_back(nn);
        if(pf.size()==2) ans++;
    }
    cout<<ans<<endl;
}
int main(){
    p();
    //int t; cin>>t; while(t--)
    code();
}

