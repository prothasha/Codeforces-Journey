#include<bits/stdc++.h>
#define ll long long
using namespace std;
void code() {
    int n, x; cin>>n>>x;
    vector<int>vec(n);
    ll sum=0;
    for(int i=0; i<n; i++) {
        cin>>vec[i];
        sum+=vec[i];
    }
    if(sum%x!=0) {
        cout<<n<<endl;
        return;
    }
    int l=-1, r=-1;
    for(int i=0; i<n; i++) if(vec[i]%x!=0) {
        l=i;
        break;
    }
    for(int i=n-1; i>=0; i--) if(vec[i]%x!=0) {
        r=i;
        break;
    }
    if(l==-1) cout<<-1 <<endl;
    else cout<<max(n-(l+1), r)<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t; while(t--)
    code();
}
