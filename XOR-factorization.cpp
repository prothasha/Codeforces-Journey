#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        long long n, k; cin>>n>>k;
        if(k==1) {
            cout<<n<<endl;
            continue;
        }
        if(k%2==1) {
            cout<<n;
            for(int i=1; i<k; i++) cout<<" "<<n;
            cout<<endl;
        }
        else {
            long long p=1;
            while(2*p<=n) p=2*p;
            long long a=p-1;
            long long b=n-a;
            cout<<a<<" "<< b;
            for(int i=0; i<k-2; i++) cout<<" "<<n;
            cout<<endl;
        }
    }
}
