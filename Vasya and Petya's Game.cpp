#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int n; cin>>n;
    vector<int>comp(n+1, 0), vec;
    for(int i=2; i*i<=n; i++) {
        if(comp[i]) continue;
        for(int j=i*i; j<=n; j+=i) {
            comp[j]=1;
        }
    }
    for(int i=2; i<=n; i++) {
        if(!comp[i]) vec.push_back(i);
    }
    vector<int>q;
    for(int i:vec) {
        int x=i;
        while(x<=n) {
            q.push_back(x);
            x*=i;
        }
    }
    cout<<q.size()<<endl;
    for(int i:q) {
        cout<<i<<" ";
    }
}
int main(){
    p();
    code();
}

