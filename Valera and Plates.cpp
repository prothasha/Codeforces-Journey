#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, a, b; cin>>n>>a>>b;
    vector<int>vec(n);
    for(int i=0; i<n; i++) cin>>vec[i];
    int co, used=0;
    for(int i=0; i<n; i++) {
        if(vec[i]==1 && a>0) {
            used++;
            a--;
        }
        else if(vec[i]==2) {
            if(b>0) {
                used++;
                b--;
            }
            else if(a>0) {
                used++;
                a--;
            }
        }
    }
    co=n-used;
    cout<<co;
}

