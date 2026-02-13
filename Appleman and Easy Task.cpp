#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    vector<string>vec(n);
    for(int i=0; i<n; i++) cin>>vec[i];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            int co=0;
            if(i>0 && vec[i-1][j]=='o') co++;
            if(i<n-1 && vec[i+1][j]=='o') co++;
            if(j>0 && vec[i][j-1]=='o') co++;
            if(j<n-1 && vec[i][j+1]=='o') co++;
            if(co%2==1) {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
}
