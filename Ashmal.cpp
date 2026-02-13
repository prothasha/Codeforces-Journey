#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<string>vec(n);
        for(int i=0; i<n; i++) cin>>vec[i];
        string ans="";
        for(int i=0; i<n; i++) {
            string n1=vec[i]+ans;
            string n2=ans+vec[i];
            ans=min(n1, n2);
        }
        cout<<ans<<endl;
    }
}
