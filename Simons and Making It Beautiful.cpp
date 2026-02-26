#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int n; cin>>n;
    vector<int>vec(n);
    int ind=0;
    for(int i=0; i<n; i++){
        cin>>vec[i];
        if(vec[i]==n) ind=i;
    }
    if(ind!=0) swap(vec[0],vec[ind]);
    for(int i=0; i<n; i++)cout<<vec[i]<<" ";
    cout<<endl;

}
int main(){
    p();
    int t; cin>>t;
    while(t--) code();
}
