#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int a, b, c; cin>>a>>b>>c;
        int d=(abs(a-b))*2;
        if(a>d || b>d || c>d) cout<<-1<<endl;
        else {
            int m=(abs(a-b))+c;
            if(m>d) m=m-d;
            cout<<m<<endl;
        }
    }
    return 0;
}

