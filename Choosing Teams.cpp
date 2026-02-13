#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin>>n>>k;
    vector<int>vec;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        if(x+k<=5) vec.push_back(x);
    }
    int p=(vec.size())/3;
    cout<<p;
    return 0;
}

