#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int>vec(n);
        map<int,int>f;
        for(int i=0; i<n; i++) {
            cin>>vec[i];
            f[vec[i]]++;
        }
        int max1=0;
        for(auto i:f) max1=max(max1, i.second);
        int m=0;
        int r=max1;
        while(r<n) {
            int s=min(r, n-r);
            r+=s;
            m++;
        }
        cout<<m+(n-max1)<<endl;
    }
}
int main(){
    p();
    code();
}
