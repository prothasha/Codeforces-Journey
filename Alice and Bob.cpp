#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n, a; cin>>n>>a;
        vector<int>vec(n);
        for(int i=0; i<n; i++) cin>>vec[i];
        int p=0,q=0;
        for(int i=0; i<n; i++){
            if(a>vec[i]) p++;
            if(a<vec[i]) q++;
        }
        int ans;
        if(p>q) ans=a-1;
        else ans=a+1;
        cout<<ans<<endl;
    }
    return 0;
}
