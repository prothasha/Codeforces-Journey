#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, c1=0, c2=0;
    cin>>n;

    while(n--) {
        string p;
        cin>>p;
        int l=p.length();
        for(int i=0; i<l; i++) {
            if(p[i]=='A') {
                c1++;
            }
            else if(p[i]=='D') {
                c2++;
            }
        }
    }
        if(c1>c2) cout<<"Anton";
        else if(c2>c1) cout<<"Danik";
        else cout<<"Friendship";
    return 0;
}
