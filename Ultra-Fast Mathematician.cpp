#include<bits/stdc++.h>
using namespace std;
int main() {
    string a, b;
    cin>>a>>b;
    for(int i=0, j=0; i<a.length(), j<b.length(); i++, j++) {
        if(a[i]==b[j]) cout<<"0";
        else cout<<"1";
    }
}

