#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int w, h, n;
        cin>>w>>h>>n;
        int co=0, ans=0;
        while(w%2==0) {
            w=w/2;
            co++;
        }
        while(h%2==0) {
            h=h/2;
            co++;
        }
        ans=pow(2, co);
        if(ans>=n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}


