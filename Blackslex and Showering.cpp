#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        long long n; cin>>n;
        vector<long long>vec(n);
        for(long long i=0; i<n; i++) cin>>vec[i];
        long long co=0;
        for(long long i=0; i<n-1; i++) co+=abs(vec[i]-vec[i+1]);
        long long min1=LLONG_MAX;
        for(long long i=0; i<n; i++) {
            long long ne=co;
            if(i==0) ne-=abs(vec[0]-vec[1]);
            else if(i==n-1) ne-=abs(vec[n-2]-vec[n-1]);
            else {
                ne=ne-abs(vec[i-1]-vec[i])-abs(vec[i]-vec[i+1]);
                ne=ne+abs(vec[i-1]-vec[i+1]);
            }
            min1=min(min1, ne);
        }
        cout<<min1<<endl;
    }
}
