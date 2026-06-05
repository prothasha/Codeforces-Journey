#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll n; cin>>n;
    //vector<ll>vec(n);
    //for(ll i=0; i<n; i++) cin>>vec[i];
    const int L=100000;
    vector<bool>P(L+1, true);
    P[0]=false;
    P[1]=false;
    for(int i=2; i*i<L; i++) {
        if(P[i]) {
            for(int j=i*i; j<L; j+=i) {
                P[j]=false;
            }
        }
    }
    vector<int>prime, non;
    for(int i=2; i<=L; i++) {
        if(P[i]) prime.push_back(i);
        else non.push_back(i);
    }
    int x;
    int m=n-1;
    for(int i=1; i<non.size(); i++) {
        int t=non[i];
        if(m+t<=L && P[m+t]) {
            x=t;
            break;
        }
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i==j) cout<<x<<" ";
            else cout<<1<<" ";
        }
        cout<<endl;
    }
}
int main(){
    fastIO();
    ll t; cin>>t; while(t--)
    code();
}
