#include<bits/stdc++.h>
using namespace std;
int main() {
    int x, y;
    cin>>x>>y;
    int c=0;
    while (x<=y) {
        x=x*3;
        y=y*2;
        c=c+1;
    }
    cout<<c;
}
