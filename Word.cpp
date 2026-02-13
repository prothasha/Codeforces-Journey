#include<bits/stdc++.h>
using namespace std;
int main() {
    string w;
    cin>>w;
    int l=w.length();
    int c1=0, c2=0;
    for (int i=0; i<l; i++) {
        if(w[i]>='a' && w[i]<='z') {
            c1++;
        }
        else if (w[i]>='A' && w[i]<='Z') {
            c2++;
        }
    }
    for (int i=0; i<l; i++) {
        if(c1>=c2) {
            w[i]=tolower(w[i]);
        }
        else {
            w[i]=toupper(w[i]);
        }
    }
    cout<<w;
    return 0;
}

