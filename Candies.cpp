#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        long long n; cin>>n;
        long long p=1, ans;
        for(int i=2; i<=30; i++) {
            long long q=i-1;
            long long x=pow(2, q);
            p+=x;
            if(n%p==0) {
                ans=n/p;
                break;
            }
        }
        cout<<ans<<endl;
    }
}
