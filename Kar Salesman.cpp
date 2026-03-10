#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    long long n, x; cin>>n>>x;
    vector<long long>vec(n);
    long long m=0;
    for(long long i=0;i<n;i++){
        cin>>vec[i];
        m+=vec[i];
    }
    sort(vec.rbegin(),vec.rend());
    long long max1=vec[0];
    long long low=0, high=1e18;
    long long ans=0;
    while(low<=high){
        long long mid=low+(high-low)/2;
        if(mid*x>=m && mid>=max1){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    cout<<low<<endl;
}
int main(){
    p();
    int t; cin>>t; while(t--) code();
}
