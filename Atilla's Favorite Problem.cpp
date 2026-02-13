#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<char>vec, v;
        for(char ch='a'; ch<='z'; ++ch) vec.push_back(ch);
        string s;
        cin>>s;
        for(int i=0; i<n; i++) v.push_back(s[i]);
        sort(v.begin(), v.end());
        for(int i=0; i<26; i++) {
            if(vec[i]==v[n-1]) {
                cout<<i+1<<endl;
                break;
            }
        }
    }
}
