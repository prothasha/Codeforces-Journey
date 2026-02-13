#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string>vec(3);
    for(int i=0; i<3; i++) cin>>vec[i];
    map<char, int>s, g;
    s['A']=0, s['B']=0, s['C']=0;
    g['A']=0, g['B']=0, g['C']=0;
    for(auto i: vec) {
        if(i[1]=='<') {
            s[i[0]]++;
            g[i[2]]++;
        }
        else {
            g[i[0]]++;
            s[i[2]]++;
        }
    }
    vector<char>ans(3, ' ');
    vector<char>v={'A','B','C'};
    for(char c: v) {
        if(s[c]==2) ans[0]=c;
        else if(s[c]==1 && g[c]==1) ans[1]=c;
        else if(g[c]==2) ans[2]=c;
    }
    if(ans[0]==' '||ans[1]==' '||ans[2]==' ') cout<<"Impossible";
    else
        for(char c: ans) cout<<c;
}
