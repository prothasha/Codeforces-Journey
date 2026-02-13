#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        string s; cin>>s;
        int ab=0, ba=0;
        for(int i=0; i+1<s.size(); i++) {
            if(s[i]=='a' && s[i+1]=='b') ab++;
            if(s[i]=='b' && s[i+1]=='a') ba++;
        }
        if(ab==ba) cout<<s<<endl;
        else {
            s[0]=s.back();
            cout<<s<<endl;
        }
    }
}
