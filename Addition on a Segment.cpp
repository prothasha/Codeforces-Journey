#include<bits/stdc++.h>
using namespace std;
int main() {
    long long t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<long long> vec(n);
        for(int i=0; i<n; i++) cin>>vec[i];
        long long aba=0, zz=0;
        for(int i=0; i<n; i++) {
            if(vec[i]==0) zz++;
            aba+=vec[i];
        }
        long long ans=min(n-zz,aba-n+1);
        cout<<ans<<endl;
    }
}
