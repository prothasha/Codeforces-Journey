#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int>vec(n);
        for(int i=0; i<n; i++) cin>>vec[i];
        int o=0, e=0;
        for(int i=0; i<n; i++) {
            if(vec[i]%2==0) e++;
            else o++;
        }
        if(e==n) cout<<"NO"<<endl;
        else if(o==n && n%2!=0) cout<<"YES"<<endl;
        else if(o==n && n%2==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}

