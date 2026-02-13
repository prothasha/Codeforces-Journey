#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int>vec;
        for(int i=0; i<n; i++) {
            int x; cin>>x;
            vec.push_back(x);
        }
        int mx=INT_MIN;
        for(int i=0; i<n; i++) {
            mx=max(mx, vec[i]);
        }
        cout<<mx<<endl;
    }
    return 0;
}
