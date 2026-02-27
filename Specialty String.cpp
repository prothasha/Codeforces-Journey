#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int n; cin>>n;
    string s; cin>>s;
    stack<char>st;
    for(char c : s) {
        if(!st.empty() && st.top()==c) st.pop();
        else st.push(c);
    }
    if(st.empty()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    p();
    int t; cin>>t; while(t--) code();
}
