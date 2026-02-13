#include<bits/stdc++.h>
using namespace std;
int main() {
    string w;
    getline(cin, w);
    vector<char>vec;
    vector<char>v;
    for(int i=0; i<w.length(); i++) {
        vec.push_back(w[i]);
    }
    for(int i=0; i<w.length(); i++) {
        if(vec[i]>='a' && vec[i]<='z' || vec[i]>='A' && vec[i]<='Z') v.push_back(vec[i]);
        else continue;
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    cout<<v.size();
    return 0;
}

