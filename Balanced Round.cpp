#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n, k; cin>>n>>k;
        vector<int>vec(n);
        for(int i=0; i<n; i++) cin>>vec[i];;
        sort(vec.begin(), vec.end());
        int l=0, max1=1;
        for(int i=1; i<n; i++) {
            if(vec[i]-vec[i-1]<=k) max1=max(max1, i-l+1);
            else l=i;
        }
        cout<<n-max1<<endl;
    }
    return 0;
}
