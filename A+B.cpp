#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        string s;
        cin>>s;
        int c=0;
        vector<int>vec;
        for(int i=0; i<s.size(); i++) {
            if(s[i]=='+') continue;
            else vec.push_back(s[i]-'0');
        }
        for(int i=0; i<vec.size(); i++) {
            c+=vec[i];
        }
        cout<<c<<endl;
    }
}
