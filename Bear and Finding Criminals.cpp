#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a; cin>>n>>a;
    vector<int>vec(n+1);
    for(int i=1; i<=n; i++) cin>>vec[i];
    int sum=0;
    if(vec[a]==1) sum+=1;
    for(int i=1; i<n; i++) {
        if(a-i>=1 && a+i<=n) {
            if(vec[a-i]==1 && vec[a+i]==1) sum+=2;
        }
        else if(a-i>=1) {
            if(vec[a-i]==1) sum+=1;
        }
        else if(a+i<=n) {
            if(vec[a+i]==1) sum+=1;
        }
    }
    cout<<sum;
}
