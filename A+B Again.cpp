#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        int t;
        cin>>t;
        int sum=0;
        while(t>0) {
            sum+=t%10;
            t=t/10;
        }
        cout<<sum<<endl;
    }
    return 0;
}

