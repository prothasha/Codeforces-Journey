#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,x,c=0;
        cin>>n;
        for(int i=0; i<n; i++) {
            cin>>x;
            if(x%2!=0) c+=x;
        }
        if(c%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
