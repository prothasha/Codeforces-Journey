#include<bits/stdc++.h>
using namespace std;
int main() {
    string a;
    cin>>a;
    int l=a.length();
    for(int i=0; i<l; i++) {
        if(a[i]==a[0]) {
            a[0]=toupper(a[0]);
            cout<<a[0];
        }
        else {
            cout<<a[i];
        }
    }

}
