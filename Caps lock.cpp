#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;

    int c1=0;

    for(int i=0; i<s.size(); i++) {
        if(isupper(s[i])) c1++;
    }

    if(c1==s.size() || (islower(s[0]) && c1==s.size()-1)) {
        for(int i=0; i<s.size(); i++) {
            if (isupper(s[i]))
                s[i]=tolower(s[i]);
            else
                s[i]=toupper(s[i]);
        }
    }

    cout<<s<<endl;
    return 0;
}
