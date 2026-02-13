#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        cout<<s[0];
        for(int i=1; i<n; i++){
            if((s[i]=='b'||s[i]=='c'||s[i]=='d')&&(i+1<n&&(s[i+1]=='a'||s[i+1]=='e'))){
                cout<<"."<<s[i]<<s[i+1];
                i++;
            }
            else cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
