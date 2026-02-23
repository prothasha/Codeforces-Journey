#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    long long n; cin>>n;
    if(n%2==0) cout<<4<<" "<<n-4;
    else cout<<9<<" "<<n-9;
}
int main(){
    p();
    code();
}
