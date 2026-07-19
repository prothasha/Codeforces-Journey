#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    string y; cin>>y;
    ll sum=0;
    int z=0;
    int e=0;
    for(char c : y){
        int d=c-'0';
        sum+=d;
        if(d==0) z++;
        if(d%2==0) e++;
    }
    if(sum%3==0 && z>=1 && e>=2) cout<<"red"<<endl;
    else cout<<"cyan"<<endl;
}
int main(){
    fastIO();
    ll t; cin>>t; while(t--)
    code();
}
