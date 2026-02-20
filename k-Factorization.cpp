#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int n, k; cin>>n>>k;
    int nn=n;
    int sq=sqrt(n);
    vector<int>pf;
    for(int i=2; i<=sq; i++) {
        while(nn%i==0) {
            pf.push_back(i);
            nn/=i;
        }
    }
    if(nn>1) pf.push_back(nn);
    if(pf.size()<k) {
        cout<<-1<<endl;
        return;
    }
    for(int i=0; i<k-1; i++) cout<<pf[i]<<" ";
    int m=1;
    for(int i=k-1; i<pf.size(); i++) m*=pf[i];
    cout<<m<<endl;
}
int main(){
    p();
    code();
}
