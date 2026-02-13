#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int>vec1(n), vec2(n);
        for(int i=0; i<n; i++) cin>>vec1[i];
        for(int i=0; i<n; i++) cin>>vec2[i];
        vector<int>ans1(2*n+1), ans2(2*n+1);
        int c=1;
        for(int i=1; i<n; i++) {
            if(vec1[i]==vec1[i-1]) c++;
            else c=1;
            ans1[vec1[i]]=max(ans1[vec1[i]], c);
        }
        ans1[vec1[0]]=max(ans1[vec1[0]],1);
        c = 1;
        for(int i=1; i<n; i++) {
            if(vec2[i]==vec2[i-1]) c++;
            else c=1;
            ans2[vec2[i]]=max(ans2[vec2[i]], c);
        }
        ans2[vec2[0]]=max(ans2[vec2[0]], 1);

        int s=0;
        for(int i=1; i<=2*n; i++) {
            s=max(s, ans1[i]+ans2[i]);
        }
        cout<<s<<endl;
    }
    return 0;
}
