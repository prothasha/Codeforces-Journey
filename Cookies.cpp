#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>vec(n);
    for(int i=0; i<n; i++) cin>>vec[i];
    int co=0, s=0;
    for(int i=0; i<n; i++) s+=vec[i];
    for(int i=0; i<n; i++) {
        int d=s-vec[i];
        if(d%2==0) co++;
    }
    cout<<co<<endl;
}
