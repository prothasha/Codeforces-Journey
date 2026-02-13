#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k; cin>>n>>k;
    vector<int>vec(n), ans;
    for(int i=0; i<n; i++) cin>>vec[i];
    vector<pair<int, int>>p;
    for(int i=0;i<n; i++) p.push_back({vec[i], i+1});
    int sum=0;
    sort(p.begin(), p.end());
    for(int i=0; i<n; i++) {
        if(sum+p[i].first<=k) {
            ans.push_back(p[i].second);
            sum+=p[i].first;
        }
    }
    cout<<ans.size()<<endl;
    for(int i:ans) cout<<i<<" ";
}
