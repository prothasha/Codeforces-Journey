#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        int x, y, z, p, c=0;
        cin>>x>>y>>z>>p;
        int max1=max(max(x, y), z);
        if(x==max1) {
            c=(max1-y)+(max1-z);
        }
        else if(y==max1) {
            c=(max1-x)+(max1-z);
        }
        else if(z==max1) {
            c=(max1-y)+(max1-x);
        }
        int m=p-c;
        if(m>=0 && m%3==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
