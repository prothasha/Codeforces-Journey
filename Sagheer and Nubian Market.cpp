#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    long long n, s; cin>>n>>s;
    vector<long long>vec(n);
    for(long long i=0; i<n; i++) cin>>vec[i];
    long long l=0, h=n, mid, k=0, cost=0;
    while(l<=h) {
        mid=(l+h)/2;
        vector<long long>vecc(n);
        for(long long i=0; i<n; i++) vecc[i]=vec[i]+(i+1)*mid;
        sort(vecc.begin(), vecc.end());
        long long c=0;
        for(long long i=0; i<mid; i++) c+=vecc[i];
        if(c<=s) {
            cost=c;
            k=mid;
            l=mid+1;
        }
        else h=mid-1;
    }
    cout<<k<<" "<<cost<<endl;
}
int main(){
    p();
    //int t; cin>>t; while(t--)
    code();
}
