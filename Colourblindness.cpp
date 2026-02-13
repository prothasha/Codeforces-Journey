#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, c=0;
        cin>>n;
        string s1, s2;
        cin>>s1>>s2;
        for(int i=0; i<n; i++) {
            if(s1[i]==s2[i]) c++;
            else if(s1[i]=='G' && s2[i]=='B' || s1[i]=='B' && s2[i]=='G') c++;
            else continue;
        }
        if(c==s1.size() && c==s2.size()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
