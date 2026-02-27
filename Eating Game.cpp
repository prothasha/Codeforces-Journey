#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int>vec(n);
        for(int i=0; i<n; i++) cin>>vec[i];
        int s=0;
        for(int i=0; i<n; i++) {
            if(vec[i]>s) {
                s=vec[i];
            }
        }
        int c=0;
        for(int i=0; i<n; i++) {
            if(vec[i]==s) {
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
