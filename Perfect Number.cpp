#include<bits/stdc++.h>
using namespace std;
void p() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code() {
    int k; cin>>k;
    int c=0, n=19;
    while(true) {
        int sum=0, x=n;
        while(x>0) {
            sum+=x%10;
            x/=10;
        }
        if(sum==10) {
            c++;
            if(c==k) {
                cout<<n<<endl;
                break;
            }
        }
        n++;
    }
}
int main() {
    p();
    code();
}
