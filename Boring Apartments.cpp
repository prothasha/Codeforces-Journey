#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        string x;
        cin>>x;
        int c=x[0]-'0';
        int l=x.size();
        int m=0;
        for(int i=0; i<c-1; i++) {
            m=m+10;
        }
        for(int i=0; i<l; i++) {
            m=m+i+1;
        }
        cout<<m<<endl;
    }
    return 0;
}
