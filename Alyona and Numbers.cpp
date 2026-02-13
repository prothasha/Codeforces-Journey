#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, m; cin>>n>>m;
    long long ans=0;
    for(long long i=1; i<=n; i++) {
        long long x=i%5;
        ans=ans+(m+x)/5;
    }
    cout<<ans;
}

