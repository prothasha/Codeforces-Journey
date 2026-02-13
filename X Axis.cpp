#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int a, b, c;
        cin>>a>>b>>c;
        vector<int>vec;
        vec.push_back(a);
        vec.push_back(b);
        vec.push_back(c);
        sort(vec.begin(), vec.end());
        int ans=(abs(vec[0]-vec[1]))+(abs(vec[1]-vec[1]))+(abs(vec[2]-vec[1]));
        cout<<ans<<endl;
    }
}
