#include<bits/stdc++.h>
using namespace std;
int main() {
    int x, y, s=0;
    cin>>x>>y;
    for(int i=0; i<x; i++) {
        int n;
        cin>>n;
        if(n>y) {
            s+=2;
        }
        else {
            s++;
        }
    }
    cout<<s;
    return 0;
}
