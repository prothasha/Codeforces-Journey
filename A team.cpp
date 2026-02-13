#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int m=0;
    while(n--) {
        int x, y, z;
        cin>>x>>y>>z;
        if((x==1||x==0) && (y==1||y==0) && (z==1||z==0)) {
            int sum=x+y+z;
            if (sum>=2) {
                m=m+1;
            }
            else {
                m=m+0;
            }
        }
    }
    cout<<m<<endl;
    return 0;
}

