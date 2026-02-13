#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        long long n, s, x; cin>>n>>s>>x;
        vector<long long>vec(n);
        for(long long i=0; i<n; i++) cin>>vec[i];
        long long co=0;
        for(long long i=0; i<n; i++) co+=vec[i];
        while(co<s) co+=x;
        if(co==s) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
