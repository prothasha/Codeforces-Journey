#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
bool notp[1000006];
vector<ll>p;
void s() {
    for(int i=2; i<=1000; i++) {
        if(notp[i]) continue;
        for(int j=i+i; j<=1000000; j+=i) notp[j]=true;
    }
    for(int i=2; i<=1000000; i++) {
        if(!notp[i]) p.push_back(i);
    }
}
void code() {
    int n; cin>>n;
    for(int i=1; i<=n; i++) {
        cout<<p[i]*p[i+1]<<" ";
    }
    cout<<endl;
}
int main() {
    fastIO();
    s();
    int t; cin>>t; while(t--)
    code();
}
