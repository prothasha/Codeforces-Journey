#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int n; cin>>n;
    vector<int>vec(n);
    for(int i=0; i<n; i++) cin>>vec[i];
    bool ok=true;
    for(int i=0; i<n-1; i++) {
        if(vec[i]>vec[i+1]) {
            ok=false;
            break;
        }
    }
    if(ok) cout<<n<<endl;
    else cout<<1<<endl;
}
int main(){
    p();
    int t; cin>>t; while(t--) code();
}
