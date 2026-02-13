#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--) {
        int a1, a2, b1, b2; cin>>a1>>a2>>b1>>b2;
        int ans=0;
        int a=0, b=0;
        if(a1>b1) a++;
        else if(a1<b1) b++;
        if(a2>b2) a++;
        else if(a2<b2) b++;
        if(a>b) ans++;

        a=0, b=0;
        if(a1>b2) a++;
        else if(a1<b2) b++;
        if(a2>b1) a++;
        else if(a2<b1) b++;
        if(a>b) ans++;

        a=0, b=0;
        if(a2>b1) a++;
        else if(a2<b1) b++;
        if(a1>b2) a++;
        else if(a1<b2) b++;
        if(a>b) ans++;

        a=0, b=0;

        if(a2>b2) a++;
        else if(a2<b2) b++;
        if(a1>b1) a++;
        else if(a1<b1) b++;
        if(a>b) ans++;
        cout<<ans<<endl;
    }
}
