#include<bits/stdc++.h>
using namespace std;
void x(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
bool prime(long long n) {
    long long sq=sqrt(n);
    for(int i=2; i<=sq; i++) {
        if(n%i==0) return false;
    }
    return true;
}
void code(){
    long long n; cin>>n;
    if(n==1) {
        cout<<6<<endl;
        return;
    }
    long long p=1+n;
    if(p%2==0) p+=1;
    for(long long i=p; i<=1e9; i+=2) {
        if(prime(i)) {
            p=i;
            break;
        }
    }
    long long q=p+n;;
    if(q%2==0) q+=1;
    for(long long i=q; i<=1e9; i+=2) {
        if(prime(i)) {
            q=i;
            break;
        }
    }
    cout<<p*q<<endl;
}
int main(){
    x();
    int t; cin>>t; while(t--) code();
}
