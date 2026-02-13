#include<bits/stdc++.h>
using namespace std;
int main() {
    string t;
    cin>>t;
    for(int i=0; i<t.size(); i++) {
        if(t[i]=='.') cout<<"0";
        if(t[i]=='-') {
            if(t[i+1]=='.') cout<<"1";
            else if(t[i+1]=='-') cout<<"2";
            i++;
        }
    }
    return 0;
}


