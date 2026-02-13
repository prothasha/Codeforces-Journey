#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c, d; cin>>a>>b>>c>>d;
    int p=(3*a)/10; int q=a-(a/250)*c;
    int M=max(p, q);
    int r=(3*b)/10; int s=b-(b/250)*d;
    int V=max(r, s);
    if(M>V) cout<<"Misha";
    else if(V>M) cout<<"Vasya";
    else cout<<"Tie";
}
