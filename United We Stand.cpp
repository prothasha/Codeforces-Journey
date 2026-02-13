#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int>vec, b, c;
        set<int>s;
        for(int i=0; i<n; i++) {
            int x; cin>>x;
            vec.push_back(x);
            s.insert(x);
        }
        sort(vec.begin(), vec.end());
        int co=0, co2=INT_MAX;
        for(int i=0; i<n; i++) {
            co2=min(vec[i], co2);
            if(co2==vec[i]) b.push_back(vec[i]);
            else c.push_back(vec[i]);
        }
        if(s.size()==1) cout<<-1<<endl;
        else {
            cout<<b.size()<<" "<<c.size()<<endl;
            for(int i:b) cout<<i<<" ";
            cout<<endl;
            for(int i:c) cout<<i<<" ";
            cout<<endl;
        }
    }
}

