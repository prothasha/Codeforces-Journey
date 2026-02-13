#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    string s; cin>>s;
    vector<char>key, door;
    for(int i=0; i<s.size(); i++) {
        if(i%2==0) key.push_back(s[i]);
        else door.push_back(s[i]);
    }
    int co=0;
    map<char, int>mm;
    for(int i=0; i<key.size(); i++) {
        mm[key[i]]++;
        char mn=tolower(door[i]);
        if(mm[mn]>0) mm[mn]--;
        else co++;
    }
    cout<<co<<endl;
}
