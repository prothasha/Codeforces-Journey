#include<bits/stdc++.h>
using namespace std;
int main() {
    string w, m, p;
    cin>>w;
    int n=0;

    for (int i=0; i<w.length(); i++) {
        if(w[i]=='h' || w[i]=='e' || w[i]=='l' || w[i]=='o') {
            m+=w[i];
        }
    }
    for (int i=0; i<m.length(); i++) {
        if (m[i]=='h' && n==0) {
            p+=m[i];
            n++;
        }
        else if (m[i]=='e' && n==1) {
            p+=m[i];
            n++;
        }
        else if (m[i]=='l' && (n==2||n==3)) {
            p+=m[i];
            n++;
        }
        else if (m[i]=='o' && n==4) {
            p+=m[i];
            break;
        }
    }
    if(p=="hello") {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
    return 0;
}

