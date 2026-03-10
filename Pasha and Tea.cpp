#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int n; double w;
    cin>>n>>w;
    vector<double>vec(2*n);
    for(int i=0; i<2*n; i++) cin>>vec[i];
    sort(vec.begin(), vec.end());
    double g=vec[0];
    double b=vec[n];
    double x=min(g, b/2.0);
    double ans=3.0*n*x;
    ans=min(ans, w);
    cout<<fixed<<setprecision(6)<<ans<<endl;
}
int main(){
    p();
    //int t; cin>>t; while(t--)
    code();
}
