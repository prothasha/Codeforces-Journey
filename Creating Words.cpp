#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=0; i<n; i++) {
        string a, b;
        cin>>a>>b;
        vector<int>x, y;
        char A=a[0], B=b[0];
        a[0]=B;
        b[0]=A;
        cout<<a<<" "<<b<<endl;
    }
}
