#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
bool Pcheck(int x){
    if(x<2) return false;
    for(int i=2; i*i<=x; i++){
        if(x%i==0) return false;
    }
    return true;
}
void code(){
    int n, k; cin>>n>>k;
    vector<int>vec;
    for(int i=2; i<=n; i++){
        if(Pcheck(i)) vec.push_back(i);
    }
    int c=0;
    for(int i=0; i+1<(int)vec.size(); i++){
        int sum=vec[i]+vec[i+1]+1;
        if(sum<=n && Pcheck(sum)) c++;
    }
    if(c>=k) cout<<"YES";
    else cout<<"NO";
}
int main(){
    fastIO();
    //ll t; cin>>t; while(t--)
    code();
}
