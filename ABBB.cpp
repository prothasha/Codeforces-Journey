#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        string s; cin>>s;
        vector<char>v;

        for(char c:s) {
            if(c=='B' &&! v.empty() && (v.back()=='A' || v.back()=='B')) v.pop_back();
            else v.push_back(c);
        }
        cout<<v.size()<<endl;
    }
}
