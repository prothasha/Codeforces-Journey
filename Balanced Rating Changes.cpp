#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>vec(n), ans;
    for(int i=0; i<n; i++) cin>>vec[i];
    bool ok=false;
    for(int i=0; i<n; i++){
        if(vec[i]%2==0) ans.push_back(vec[i]/2);
        else{
            if(!ok){
                ans.push_back((vec[i]+1)/2);
                ok=true;
            }
            else {
                ans.push_back((vec[i]-1)/2);
                ok=false;
            }
        }
    }
    for(int i:ans) cout<<i<<endl;
}
