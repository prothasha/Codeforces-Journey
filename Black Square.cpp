#include<bits/stdc++.h>
using namespace std;
int main() {
    int a, b, c, d, sum=0;
    cin>>a>>b>>c>>d;
    string w;
    cin>>w;
    for(int i=0; i<w.size(); i++) {
        if(w[i]=='1') sum=sum+a;
        else if(w[i]=='2') sum=sum+b;
        else if(w[i]=='3') sum=sum+c;
        else if(w[i]=='4') sum=sum+d;
    }
    cout<<sum<<endl;
}
