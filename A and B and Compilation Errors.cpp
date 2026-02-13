#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;

    vector<int>v1(n),v2(n-1),v3(n-2);
    for(int i=0; i<n; i++) cin>>v1[i];
    for(int i=0; i<n-1; i++) cin>>v2[i];
    for(int i=0; i<n-2; i++) cin>>v3[i];

    map<int,int>m1,m2,m3;
    for(int i=0; i<n; i++)m1[v1[i]]++;
    for(int i=0; i<n-1; i++)m2[v2[i]]++;
    for(int i=0; i<n-2; i++)m3[v3[i]]++;

    for(auto i:m1) {
        if(m2[i.first]<i.second) {
            cout<<i.first<<endl;
            break;
        }
    }
    for(auto i:m2) {
        if(m3[i.first]<i.second) {
            cout<<i.first<<endl;
            break;
        }
    }
}
