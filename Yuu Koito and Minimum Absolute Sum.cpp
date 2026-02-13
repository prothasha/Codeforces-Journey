#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int>vec(n);
        for(int i=0; i<n; i++) cin>>vec[i];

        if(vec[0]==-1 && vec[n-1]==-1) {
            vec[0]=0;
            vec[n-1]=0;
        }
        else if (vec[0]==-1) vec[0]=vec[n-1];
        else if(vec[n-1]==-1) vec[n-1]=vec[0];


        for(int i=1; i<n-1; i++) if(vec[i]==-1) vec[i]=0;

        cout<<abs(vec[n-1]-vec[0])<<endl;
        for(int i=0; i<n; i++) cout<<vec[i]<<" ";
        cout<<endl;;
    }
    return 0;
}
