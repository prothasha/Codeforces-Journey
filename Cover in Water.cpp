#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        int x; cin>>x;
        string s; cin>>s;
        int co=0;
        for(int i=0; i<x; i++) {
            if(s[i]=='.' && i+1<x && s[i+1]=='.' && i+2<x && s[i+2]=='.') {
                co=2;
                break;
            }
            if(s[i]=='.') co++;
        }
        cout<<co<<endl;
    }
    return 0;
}
