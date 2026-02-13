#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        long long n, k; cin>>n>>k;
        bool ok=false;
        for(long long i=0; i<2; i++) {
            long long p=n-i*k;
            if(p>=0 && p%2==0) {
                ok=true;
                break;
            }
        }
        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
