#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, a; cin>>n>>a;
    vector<int>vec(n);
    for(int i=0; i<n; i++) cin>>vec[i];
    sort(vec.begin(), vec.end());
    int mx=0, g=0;
    for(int i=0; i<n-1; i++) {
        g=vec[i+1]-vec[i];
        mx=max(g, mx);
    }
    double l=vec[0]-0;
    double r=a-vec[n-1];
    double d=max(mx/2.0, max(l, r));
    cout<<fixed<<setprecision(10)<<d<<endl;
    return 0;
}
