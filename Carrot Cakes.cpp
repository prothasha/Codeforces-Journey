#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, t, k, d; cin>>n>>t>>k>>d;
    int one=((n+k-1)/k)*t;
    int two=d+t;
    if(two<one) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
