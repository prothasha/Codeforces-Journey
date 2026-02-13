#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>vec1(n);
    for(int i=0; i<n; i++) cin>>vec1[i];
    int m; cin>>m;
    vector<int>vec2(m);
    for(int j=0; j<m; j++) cin>>vec2[j];
    int max1=0, co=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(vec2[j]%vec1[i]==0){
                int p=vec2[j]/vec1[i];
                if(p>max1) {
                    max1=p;
                    co=1;
                }
                else if(p==max1) co++;
            }
        }
    }
    cout<<co;
}
