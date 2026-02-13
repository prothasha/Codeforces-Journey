#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a, b, c;
    cin>>n>>a>>b>>c;
    int ans=0;
    for(int i=0; i<=n/a; i++) {
        for(int j=0; j<=n/b; j++) {
            int p=n-(i*a+j*b);
            if(p<0) continue;
            if(p%c==0) {
                int q=p/c;
                ans=max(ans,i+j+q);
            }
        }
    }
    cout<<ans<<endl;
}
