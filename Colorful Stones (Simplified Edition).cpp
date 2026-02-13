#include<bits/stdc++.h>
using namespace std;
int main() {
    string s,t; cin>>s>>t;
    int c=0;
    for(char i:t) if(s[c]==i) c++;
    cout<<c+1<<endl;
}
