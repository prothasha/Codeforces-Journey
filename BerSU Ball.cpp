#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>b(n);
    for(int i=0; i<n; i++) cin>>b[i];
    int m; cin>>m;
    vector<int>g(m);
    for(int i=0; i<m; i++) cin>>g[i];
    sort(b.begin(), b.end());
    sort(g.begin(), g.end());
    int co=0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(g[j]!=-50) {
                int p=abs(b[i]-g[j]);
                if(p<=1) {
                    co++;
                    g[j]=-50;
                    break;
                }
            }
        }
    }
    cout<<co<<endl;
}
