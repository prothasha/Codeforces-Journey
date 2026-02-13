#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    while(n--) {
        string s, t; cin>>s>>t;
        map<char, int> r;
        for(char ch : t)r[ch]++;
        map<char, int>m;
        int j=t.size()-1;
        bool p=true;
        for(int i=s.size()-1; i>=0; i--) {
            char ch=s[i];
            if(r[ch]>0) {
                if(m[ch]<r[ch]) {
                    if(j>=0 && ch==t[j]) {
                        m[ch]++;
                        j--;
                    }
                    else {
                        p=false;
                        break;
                    }
                }
            }
        }
        if(p && j==-1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}
