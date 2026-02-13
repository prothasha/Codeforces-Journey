#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; string s; cin>>n>>s;
    string l="", r="";
    for(int i=0; i<n; i++) {
        if((n-i)%2) r=r+s[i];
        else l=s[i]+l;
    }
    cout<<l+r<<endl;
}
