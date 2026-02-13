#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int n, m, k, t; cin>>n>>m>>k>>t;
    vector<pair<int, int>>w(k);
    for(int i=0; i<k; i++) cin>>w[i].first>>w[i].second;
    vector<pair<int, int>>q(t);
    for(int i=0; i<t; i++) cin>>q[i].first>>q[i].second;
    vector<vector<char>>vec(n+1, vector<char>(m+1, '.'));
    for(int i=0; i<k; i++) {
        int r=w[i].first; int c=w[i].second;
        vec[r][c]='W';
    }
    char cr[3]={'C', 'K', 'G'};
    int ind=0;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            if(vec[i][j]!='W') {
                vec[i][j]=cr[ind];
                ind=(ind+1)%3;
            }
        }
    }
    for(int i=0; i<t; i++) {
        int r=q[i].first;
        int c=q[i].second;
        if(vec[r][c]=='W') cout<<"Waste"<<endl;
        if(vec[r][c]=='C') cout<<"Carrots"<<endl;;
        if(vec[r][c]=='K') cout<<"Kiwis"<<endl;;
        if(vec[r][c]=='G') cout<<"Grapes"<<endl;;
    }
}
int main(){
    p();
    code();
}
