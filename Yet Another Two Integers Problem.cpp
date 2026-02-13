#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, c=0;
    cin>>n;
    while(n--) {
        int a, b;
        cin>>a>>b;
        if(a==b) cout<<0<<endl;
        else {
            int c=abs(a-b);
            int ans=0;
            for(int i=10; i>=1; i--) {
                ans+=c/i;
                c%=i;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
