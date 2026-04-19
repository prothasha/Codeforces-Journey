#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll h, w, k, i, t; cin>>h>>w>>k>>i>>t;
    vector<string>vec(h);
    for(int r=0; r<h; r++){
        vec[r]=string(w,' ');
    }
    vec[0][0]='K'; k--;
    vec[0][1]='I'; i--;
    vec[0][2]='T'; t--;
    for(int r=0; r<h; r++){
        for(int c=0; c<w; c++){
            if(r==0 && c<3) continue;
            if(t>0){
                vec[r][c]='T';
                t--;
            }
            else if(k>0){
                vec[r][c]='K';
                k--;
            }
            else if(i>0){
                vec[r][c]='I';
                i--;
            }
        }
    }
    for(int r=0; r<h; r++) cout<<vec[r]<<endl;
}
int main(){
    fastIO();
    code();
}
