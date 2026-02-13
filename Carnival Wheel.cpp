#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--) {
        int l, a, b; cin>>l>>a>>b;
        int ans=a;
        int x=a;
        for(int i=0; i<l; i++) {
            ans=max(ans, x);
            x=(x+b)%l;
        }
        cout<<ans<<endl;
    }
}
