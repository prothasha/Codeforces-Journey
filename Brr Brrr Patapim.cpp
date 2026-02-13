#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin>>n;
        vector<int>vec(2*n+1,0);
        set<int>s;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                int x; cin>>x;
                vec[i+j]=x;
                s.insert(x);
            }
        }
        for(int i=1; i<=2*n; i++){
            if(s.find(i)==s.end()){
                vec[1]=i;
                break;
            }
        }
        for(int i=1; i<=2*n; i++) cout<<vec[i]<<" ";
        cout<<endl;
    }
}
