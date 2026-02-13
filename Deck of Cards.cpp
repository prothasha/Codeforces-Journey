#include<bits/stdc++.h>
using namespace std;
int main() {
    int m; cin>>m;
    while(m--) {
        int n, k; cin>>n>>k;
        string s; cin>>s;
        int t=0, b=0, c=0;
        vector<char>vec(n, '+');
        for(int i=0; i<k; i++) {
            if(s[i]=='0') t++;
            else if(s[i]=='1') b++;
            else c++;
        }
        if(n==k) for(int i=0; i<n; i++) vec[i]='-';
        else {
            for(int i=0; i<t; i++) vec[i]='-'; //all 0
            for(int i=n-1; i>=n-b; i--) vec[i]='-'; // all 1
            int p=c+t;
            for(int i=t; i<p; i++) vec[i]='?';
            int q=b+c;
            for(int i=n-b-1; i>=(n-q); i--) vec[i]='?';
        }
        for(char i: vec) cout<<i;
        cout<<endl;
    }
}
