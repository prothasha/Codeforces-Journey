#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll p1, p2, p3; cin>>p1>>p2>>p3;
    ll sum=p1+p2+p3;
    if(sum%2){
        cout<<-1<<endl;
        return;
    }
    ll g=sum/2;
    cout<<min(g, p1+p2)<<endl;
}
int main(){
    fastIO();
    ll t; cin >> t;
    while(t--) code();
}
