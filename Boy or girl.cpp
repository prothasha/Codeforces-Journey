#include<bits/stdc++.h>
using namespace std;
int main() {
    string w;
    cin>>w;
    int co=0, i, j;
    int l=w.length();
    for(i=0; i<l; i++) {
        for(j=0; j<i; j++) {
            if(w[i]==w[j]) {
                break;
            }
        }
        if(j==i) {
            co++;
        }
    }
    if(co%2==0) {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else {
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}
