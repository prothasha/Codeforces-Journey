#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    long long a, b; cin>>a>>b;
    long long p=(a+b)/3;
    long long q=min(a, b);
    long long ans=min(p, q);
    cout<<ans<<endl;
}
int main(){
    p();
    int t; cin>>t; while(t--) code();
}
