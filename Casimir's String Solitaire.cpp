#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    while(n--) {
        string s; cin>>s;
        map<char, int>freq;
        for(int i=0; i<s.size(); i++) {
            freq[s[i]]++;
        }
        int B=0, co=0;
        for(auto i:freq) {
            if(i.first=='B') B+=i.second;
            else co+=i.second;
        }
        if(co==B) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
