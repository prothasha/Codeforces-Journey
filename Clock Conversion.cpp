#include<bits/stdc++.h>
using namespace std;
void pp(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int t; cin>>t;
    while(t--) {
        string s; cin>>s;
        int hh=stoi(s.substr(0,2));
        string mm=s.substr(3,2);
        string p;
        if(hh==0) {
            hh=12;
            p="AM";
        }
        else if(hh<12) p="AM";
        else if(hh==12) p="PM";
        else {
            hh-=12;
            p="PM";
        }
        cout<<setw(2)<<setfill('0')<<hh<<":"<<mm<<" "<<p<<endl;
    }
}
int main(){
    pp();
    code();
}

