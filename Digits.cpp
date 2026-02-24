#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    long long n, d; cin>>n>>d;
    cout<<1<<" ";
    if(n>=3 || d%3==0) cout<<3<<" ";
    if(d==5) cout<<5<<" ";
    if(n>=3 || d==7) cout<<7<<" ";
    if(n>=6 || d%9==0 ||(n>=3 && d%3==0)) cout<<9<<" ";
    cout<<endl;
}
int main(){
    p();
    int t; cin>>t;
    while(t--) code();
}
