#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        int a, b; cin>>a>>b;
        string s; cin>>s;
        map<char, int>m;
        for(int i=0; i<s.size(); i++) {
            char p=s[i];
            m[p]++;
        }
        int co=0;
        for(auto i: m) {
            if(i.second%2==0) continue;
            else co++;
        }
        if(co-b<=1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
