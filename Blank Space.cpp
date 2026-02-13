#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        int t;
        cin>>t;
        vector<int>vec;
        int max1=0, c=0;
        for(int i=0; i<t; i++) {
            int x;
            cin>>x;
            vec.push_back(x);
        }
        for(int i=0; i<vec.size(); i++) {
            if(vec[i]==0) {
                c++;
                max1=max(c, max1);
            }
            else c=0;
        }
        cout<<max1<<endl;
    }
}
