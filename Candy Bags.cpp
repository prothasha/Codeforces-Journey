#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    int s=1, e=n*n;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n/2; j++) {
            cout<<s<<" "<<e<<" ";
            s++, e--;
        }
        cout<<endl;
    }
}

