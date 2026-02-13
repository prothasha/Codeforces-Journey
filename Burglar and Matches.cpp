#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin>>n>>m;
    vector<pair<int,int>>vec(m);
    for(int i=0; i<m; i++) cin>>vec[i].first>>vec[i].second;
    sort(vec.begin(), vec.end(), [](auto &a, auto &b) {
        return a.second>b.second;
    });
    long long ans=0;
    for(int i=0; i<m && n>0; i++) {
        int t=min(n, vec[i].first);
        ans+=1LL*t*vec[i].second;
        n-=t;
    }
    cout<<ans<<endl;
}
