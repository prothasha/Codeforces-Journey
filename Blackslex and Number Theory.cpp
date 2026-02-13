#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int>vec(n);
        for(int i=0; i<n; i++) cin>>vec[i];
        int mn=*min_element(vec.begin(), vec.end());
        bool ok=true;
        int min1=INT_MAX;

        for(int i=0; i<n; i++) {
            if(vec[i]>mn) {
                if(vec[i]<=2* mn) ok=false;
                min1= min(min1, vec[i]-mn);
            }
        }
        if(ok) cout<<min1<<endl;
        else cout<<mn<<endl;
    }
}
