#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m; cin>>n>>m;
    vector<long long>vec(m);
    for(long long i=0; i<m; i++) cin>>vec[i];
    vector<long long>vec1=vec;
    long long min1=0, i=0;
    while(i<n){
        sort(vec1.begin(),vec1.end());
        min1+=vec1[0];
        vec1[0]--;
        if(vec1[0]==0) vec1.erase(vec1.begin());
        i++;
    }
    vector<long long>vec2=vec;
    long long max1=0, j=0;
    while(j<n){
        sort(vec2.begin(),vec2.end(),greater<long long>());
        max1+=vec2[0];
        vec2[0]--;
        if(vec2[0]==0) vec2.erase(vec2.begin());
        j++;
    }
    cout<<max1<<" "<<min1<<endl;
}
