#include<bits/stdc++.h>
using namespace std;
int main() {
    string s; cin>>s;
    for(int i=0; i<s.size(); i++) {
        int p=s[i]-'0';
        int d=9-p;
        if(i==0 && p==9) cout<<p;
        else if(p>d) cout<<d;
        else cout<<p;
    }
    return 0;
}
