#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    long long t; cin>>t;
    while(t--) {
        long long x; cin>>x;
        if(x%2!=0 || x<4) cout<<-1<<endl;
        else cout<<(x+5)/6<<" "<<x/4<<endl;
    }
}
int main(){
    p();
    code();
}

