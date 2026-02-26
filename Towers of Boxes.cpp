#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int n, m, d; cin>>n>>m>>d;
    int h=d/m+1;
    int p=0, q=n;
    while(q>0) {
        int r=min(h, q);
        q-=r;
        p++;
    }
    cout<<p<<endl;
}
int main(){
    p();
    int t; cin>>t;
    while(t--) code();
}
