#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    string s; cin>>s;
    int ans=10;
    int a=0, b=0, x=5, y=5;
    for(int i=0; i<10; i++){
        if(i%2==0){
            x--;
            if(s[i]=='1'||s[i]=='?') a++;
        }
        else{
            y--;
            if(s[i]=='1')b++;
        }
        if(a>b+y){
            ans=min(ans,i+1);
            break;
        }
        if(b>a+x){
            ans=min(ans,i+1);
            break;
        }
    }
    a=0; b=0; x=5; y=5;
    for(int i=0; i<10; i++){
        if(i%2==0){
            x--;
            if(s[i]=='1') a++;
        }
        else{
            y--;
            if(s[i]=='1'||s[i]=='?') b++;
        }
        if(a>b+y){
            ans=min(ans,i+1);
            break;
        }
        if(b>a+x){
            ans=min(ans,i+1);
            break;
        }
    }
    cout<<ans<<endl;
}
int main(){
    fastIO();
    ll t;cin>>t;while(t--)
    code();
}
