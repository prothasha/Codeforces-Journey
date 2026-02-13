#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int A=0,B=0;
        bool p=false;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]!=s[i+1]){
                if(i%2==0)A++;
                else B++;
            }
        }
        int z=0,o=0;
        for(char c:s){
            if(c=='0')z++;
            else o++;
        }
        int m=min(z,o);
        if(m%2==1)cout<<"DA"<<endl;
        else cout<<"NET"<<endl;
    }
}
