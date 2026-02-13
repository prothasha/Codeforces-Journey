#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n, a, b; cin>>n>>a>>b;
        vector<char>vec;
        char ch='a';
        for(int i=1; i<=n; i++) {
            vec.push_back(ch);
            if(i%b!=0) ch++;
            else ch='a';
        }
        for(char i: vec) cout<<i;
        cout<<endl;
    }
}

