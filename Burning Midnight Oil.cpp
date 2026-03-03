#include<bits/stdc++.h>
using namespace std;
void p() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
long long x(long long v, long long k) {
    long long s=0;
    long long po=1;
    while(v/po>0) {
        s+=v/po;
        po*=k;
    }
    return s;
}
void code() {
    long long n, k; cin>>n>>k;
    long long l=1, h=n, ans=n;
    while(l<=h) {
        long long mid=(l+h)/2;
        if(x(mid, k)>=n) {
            ans=mid;
            h=mid-1;
        }
        else l=mid+1;
    }
    cout<<ans<<endl;
}
int main() {
    p();
    // int t; cin >> t; while (t--) code();
    code();
}
