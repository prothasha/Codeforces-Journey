#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n; cin>>n;
    if(n<10) {
        for(int i=0; i<n; i++) cout<<(char)('a'+i);
        cout<<endl;
        return;
    }
    int x=n/2;
    for(int i=0; i<x; i++) cout<<'p';
    cout<<'a';
    if(n%2) cout<<'b';
    for(int i=0; i<x-1; i++) cout<<'p';
    cout<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t; while(t--)
    solve();
}

