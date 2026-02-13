#include<bits/stdc++.h>
using namespace std;
int main() {
    string s; cin>>s;
    int n; cin>>n;
    vector<string>vec(n), ans;
    for(int i=0; i<n; i++) cin>>vec[i];
    for(int i=0; i<n; i++) {
        if(vec[i].rfind(s, 0)==0) {
            ans.push_back(vec[i]);
        }
    }
    if(ans.size()==0) {
        cout<<s;
        return 0;
    }
    string min1=ans[0];
    for(int i=1; i<ans.size(); i++) if(ans[i]<min1) min1=ans[i];
    cout<<min1;
}
