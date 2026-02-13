#include<bits/stdc++.h>
using namespace std;
int main() {
    int k; cin>>k;
    vector<int>vec;
    for(int i=0; i<12; i++) {
        int x; cin>>x;
        vec.push_back(x);
    }
    int ans=0, p=0;
    sort(vec.begin(), vec.end());
    for(int i=vec.size()-1; i>=0; i--) {
        if(p<k) {
            p+=vec[i];
            ans++;
        }
    }

    if(p>=k) cout<<ans<<endl;
    else cout<<-1<<endl;
    return 0;
}
