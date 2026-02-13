#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        long long n, k, x; cin>>n>>k>>x;
        long long c1=k*(k+1)/2;
        long long c2=k*(2*n-k+1)/2;
        if(x>=c1 && x<=c2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
