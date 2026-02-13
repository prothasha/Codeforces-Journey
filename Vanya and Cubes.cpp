#include <bits/stdc++.h>
using namespace std;
int main() {
    int num;
    cin>>num;
    int sum=0, n=0, c=0;
    for(int i=1; i<=num; i++) {
        sum+=i;
        n+=sum;
        if(n>=num) {
            c=i;
            break;
        }
    }
    if(n<=num) cout<<c<<endl;
    else cout<<c-1<<endl;
}
