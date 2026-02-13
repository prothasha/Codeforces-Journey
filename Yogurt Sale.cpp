#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, a, b;
        cin>>n>>a>>b;
        int ans, p=2*a;
        if(p>b) ans=(n/2)*b+(n%2)*a;
        else ans=n*a;
        cout<<ans<<endl;
    }
}

