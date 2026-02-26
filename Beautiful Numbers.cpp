#include<bits/stdc++.h>
using namespace std;
void pp() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code() {
    string s; cin>>s;
    int n=s.size();
    vector<int>vec(n);
    int sum=0;
    for(int i=0; i<n; i++) {
        vec[i]=s[i]-'0';
        sum+=vec[i];
    }
    if(sum<=9) {
        cout<<0<<endl;
        return;
    }
    int m=0;
    vector<pair<int,int>> v;
    for(int i=0; i<n; i++) {
        v.push_back({vec[i], i});
    }
    sort(v.rbegin(), v.rend());
    for(auto p : v) {
        if(sum<=9) break;
        int x=p.first;
        int ind=p.second;
        int d;
        if(ind==0) d=x-1;
        else d=x;
        sum-=d;
        m++;
    }
    cout<<m<<endl;
}
int main() {
    pp();
    int t; cin>>t;
    while (t--) code();
}
