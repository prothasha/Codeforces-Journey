#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        int a, b, c;
        cin>>a>>b>>c;
        if(a>b) cout<<"First"<<endl;
        else if(a<b) cout<<"Second"<<endl;
        else if(a==b) {
            if(c%2!=0) cout<<"First"<<endl;
            else cout<<"Second"<<endl;
        }
    }
    return 0;
}
