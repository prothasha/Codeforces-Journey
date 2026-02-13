#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>m(5), w(5);
    for(int i=0; i<5; i++) cin>>m[i];
    for(int i=0; i<5; i++) cin>>w[i];
    double hs, hu; cin>>hs>>hu;
    vector<int>x={500, 1000, 1500, 2000, 2500};
    double s=0;
    for(int i=0; i<5; i++) {
        double v1=0.3*x[i];
        double v2=(1.0-m[i]/250.0)*x[i]-50*w[i];
        s+=max(v1, v2);
    }
    s+=hs*100.0;
    s-=hu*50.0;
    cout<<(int)round(s)<<endl;
}
