#include<bits/stdc++.h>
using namespace std;
int main() {
    int k, r;
    cin>>k>>r;
    for(int i=1; i<=10; i++) {
        int n=i*k;
        if(n%10==0 || n%10==r) {
            cout<<i;
            break;
        }
    }
    return 0;
}

