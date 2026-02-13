#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    vector<int>vec(n);
    for(int i=0; i<n; i++) cin>>vec[i];
    map<int,int>m;
    int fn=0;
    for(int x:vec) {
        m[x]++;
        fn=max(fn, m[x]);
    }
    if(fn<=(n+1)/2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
