#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin>>n>>m;
    vector<int>vec;
    while(m--) {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    int po=1;
    long long ans=0;
    for(int i=0; i<vec.size(); i++) {
        if(vec[i]>po) {
            ans+=vec[i]-po;
            po=vec[i];
        }
        else if(vec[i]<po) {
            ans+=n-po+vec[i];
            po=vec[i];
        }
    }
    cout<<ans<<endl;
}
