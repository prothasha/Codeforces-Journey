#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        int p=8;
        while(p--) {
            for(int i=0; i<8; i++) {
                char x;
                cin>>x;
                if(x>='a' && x<='z' || x>='A' && x<='Z') cout<<x;
            }
        }
        cout<<endl;
    }
    return 0;
}
