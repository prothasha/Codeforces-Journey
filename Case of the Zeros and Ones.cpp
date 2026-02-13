#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    string a; cin>>a;
    vector<char>vec;
    for(int i=0; i<n; i++) vec.push_back(a[i]);
    int ans=n, i=0;
    while(i<ans-1) {
        if((vec[i]=='0' && vec[i+1]=='1') || (vec[i]=='1' && vec[i+1]=='0')) {
            vec.erase(vec.begin()+i, vec.begin()+i+2);
            ans-=2;
            if(i>0) i--;
        }
        else i++;
    }
    cout<<ans;
}
