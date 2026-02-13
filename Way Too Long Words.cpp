#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while (n--) {
        string w;
        cin>>w;
        int c=0;
        int l=w.length();
        for(int i=0; i<l; i++) {
            c++;
            if(l<=10) {
                cout<<w<<endl;
                break;
            }
            if (l>10) {
                cout<<w[0]<<l-2<<w[l-1]<<endl;
                break;
            }
        }
    }
}
