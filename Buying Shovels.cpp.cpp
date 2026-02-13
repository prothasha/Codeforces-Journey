#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        long long n, k; cin>>n>>k;
        long long ans=n;
        long long d=1;
        while(d*d<=n){
            if(n%d==0){
                if(d<=k) ans=min(ans,n/d);
                if(n/d<=k) ans=min(ans,d);
            }
            d++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
