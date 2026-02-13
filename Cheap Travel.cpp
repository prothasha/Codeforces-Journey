#include <iostream>
using namespace std;
int main() {
    int n, m, a, b;
    cin>>n>>m>>a>>b;
    int s=n*a;
    int p=(n/m)*b+(n%m)*a;
    int q=n+m-1;
    int r=(q/m)*b;
    int ans=min(s, min(p, r));
    cout<<ans<<endl;
    return 0;
}
