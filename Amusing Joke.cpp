#include<bits/stdc++.h>
using namespace std;
int main() {
    string p, q;
    cin>>p>>q;
    string r;
    cin>>r;
    vector<char> m;
    for(int i=0; i<r.length(); i++) {
        r[i]=tolower(r[i]);
        m.push_back(r[i]);
    }
    string n=p+q;
    vector<char> name;
    for(int i=0; i<n.length(); i++) {
        n[i]=tolower(n[i]);
        name.push_back(n[i]);
    }

    sort(name.begin(), name.end());
    sort(m.begin(), m.end());

    if(name==m) cout<<"YES";
    else cout<<"NO";

}

