#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--) {
        long long n; cin>>n;
        long long ans=0;
        for(long long i=0, p=1; i<=n, p<=n; i++, p+=2) {
            ans=ans+(i*i*8);
        }
        cout<<ans<<endl;
    }
}

