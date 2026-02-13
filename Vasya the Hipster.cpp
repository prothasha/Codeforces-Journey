#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cin>>a>>b;
    int m=min(a, b);
    cout<<m<<" ";
    if(a>b) {
        int n=(a-b)/2;
        cout<<n;
    }
    else if(a<b) {
        int n=(b-a)/2;
        cout<<n;
    }
    else if(a==b) {
        cout<<0;
    }
    return 0;
}

