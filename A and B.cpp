#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        vector<int>a, b;
        for(int i=0; i<n; i++){
            if(s[i]=='a')a.push_back(i);
            else b.push_back(i);
        }
        long long ans=LLONG_MAX;
        if(!a.empty()){
            int k=a.size();
            int mid=k/2;
            long long c=0;
            for(int i=0; i<k; i++) c+=abs(a[i]-(a[mid]-mid+i));
            ans=min(ans,c);
        }
        if(!b.empty()){
            int k=b.size();
            int mid=k/2;
            long long c=0;
            for(int i=0; i<k; i++) c+=abs(b[i]-(b[mid]-mid+i));
            ans=min(ans,c);
        }
        cout<<ans<<endl;
    }
}
