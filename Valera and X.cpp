#include<bits/stdc++.h>
using namespace std;
int main(){
        long long n; cin>>n;
        vector<string>vec(n);
        for(int i=0; i<n; i++) cin>>vec[i];
        bool ok=true;
        int dia=vec[0][0], oth=vec[0][1];
        if(dia==oth) {
            cout<<"NO"<<endl;
            return 0;
        }
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if(i==j || i+j==n-1) {
                    if(vec[i][j]!=dia) {
                        ok=false;
                        break;
                    }
                }
                else {
                    if(vec[i][j]!=oth) {
                        ok=false;
                        break;
                    }
                }
            }
        }
        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
}
