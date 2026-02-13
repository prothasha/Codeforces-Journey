#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int x; cin>>x;
    int y=7-x;
    bool ok=true;
    for(int i=0; i<n; i++) {
        int a, b; cin>>a>>b;
        if(a==x || a==y || b==x || b==y) ok=false;
    }
    if(ok) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
