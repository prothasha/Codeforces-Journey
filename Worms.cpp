#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    vector<int>vec(t), x(t);
    for(int i=0; i<t; i++) cin>>vec[i];
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    x[0]=vec[0];
    for(int i=1; i<t; i++) x[i]=x[i-1]+vec[i];

    map<int,int>m;
    for(int i=0; i<t; i++) m[x[i]]=i+1;

    for(int i=0; i<n; i++) {
        int q=v[i];
        auto it=m.lower_bound(q);
        cout<<it->second<<endl;
    }
}
