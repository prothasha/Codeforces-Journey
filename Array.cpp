#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x; cin>>n;
    vector<int>neg, pos, z;
    for(int i=0; i<n; i++){
        cin>>x;
        if(x<0) neg.push_back(x);
        else if(x>0) pos.push_back(x);
        else z.push_back(x);
    }
    cout<<1<<" "<<neg[0]<<endl;
    if(pos.empty()){
        cout<<2<<" "<<neg[1]<<" "<<neg[2]<<endl;
        cout<<neg.size()-3+z.size()<<" ";
        for(int i=3; i<neg.size(); i++) cout<<neg[i]<<" ";
        for(int i:z) cout<<i<<" ";
        cout<<endl;
    }
    else{
        cout<<pos.size()<<" ";
        for(int i:pos) cout<<i<<" ";
        cout<<endl;
        cout<<neg.size()-1+z.size()<<" ";
        for(int i=1; i<neg.size(); i++)cout<<neg[i]<<" ";
        for(int i:z) cout<<i<<" ";
        cout<<endl;
    }
}
