#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>vec;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    for(int i=0; i<n; i++) {
        if(vec[i]<0) vec[i]=abs(vec[i]);
    }
    sort(vec.begin(), vec.end());
    int ans=INT_MAX;
    ans=min(ans, abs(vec[0]));
    cout<<ans;
    return 0;
}
