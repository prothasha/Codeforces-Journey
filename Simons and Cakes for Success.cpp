#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    long long n;cin>>n;
    long long nn=n;
    long long ans=1;
    int sq=sqrt(nn);
    for(long long i=2; i<=sq; i++){
        if(nn%i==0){
            int c=0;
            while(nn%i==0){
                nn/=i;
                c++;
            }
            long long x=(c+n-1)/n;
            while(x--) ans*=i;
        }
    }
    if(nn>1){
        long long x=(1+n-1)/n;
        ans*=nn;
    }
    cout<<ans<<endl;
}
int main(){
    p();
    int t; cin>>t;
    while(t--) code();
}
