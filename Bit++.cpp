#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int m=0;
    while(n--) {
        string p;
        cin>>p;
        if(p=="++X" || p=="X++") {
            m=m+1;
        }
        if(p=="--X" || p=="X--") {
            m=m-1;
        }
    }
    cout<<m<<endl;
    return 0;
}


