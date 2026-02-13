#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        string s;
        cin>>s;
        for(int i=0; i<s.size(); i++) {
            s[i]=tolower(s[i]);
        }
            if(s=="yes") cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
    }
    return 0;
}
