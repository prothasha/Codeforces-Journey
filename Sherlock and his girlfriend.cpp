#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    long long n; cin>>n;
    vector<long long>comp(1000000+1, 0), prime;
    for(long long i=2; i<=1000000; i++) {
        if(comp[i]) continue;
        for(long long j=i+i; j<=1000000; j+=i) {
            comp[j]=1;
        }
    }
    if(n==1 || n==2) cout<<1<<endl;
    else cout<<2<<endl;
    for(long long i=2; i<=n+1; i++) {
        if(!comp[i]) cout<<1<<" ";
        else cout<<2<<" ";
    }
}
int main(){
    p();
    code();
}
