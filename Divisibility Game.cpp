#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int t; cin>>t;
    while(t--) {
        int n, m; cin>>n>>m;

        vector<int>vec1(n), vec2(m), cnt1(n+m+1), cnt2(n+m+1);
        for(int i=0; i<n; i++) cin>>vec1[i];
        for(int i=0; i<m; i++) cin>>vec2[i];

        set<int>s;
        for(int i=0; i<n; i++) {
            s.insert(vec1[i]);
            cnt1[vec1[i]]++;
        }

        for(auto e:s) {
            for(int i=e; i<=n+m; i+=e) {
                cnt2[i]+=cnt1[e];
            }
        }

        int A=0, B=0, AB=0;

        for(auto e:vec2) {
            if(cnt2[e]==0) ++B;
            else if(cnt2[e]==n) ++A;
            else ++AB;
        }
        (A+(AB%2)>B)? cout<<"Alice"<<endl: cout<<"Bob"<<endl;
    }
}
int main(){
    p();
    code();
}

