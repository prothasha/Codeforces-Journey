#include<bits/stdc++.h>
using namespace std;
int main(){
    int k; cin>>k;
    vector<string>vec(4);
    for(int i=0; i<4; i++) cin>>vec[i];
    map<char,int>m;
    for(int i=0; i<4; i++){
        for(char c:vec[i]) if(c!='.') m[c]++;
    }
    for(auto &p:m){
        if(p.second>k*2){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}
