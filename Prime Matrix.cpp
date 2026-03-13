#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int n, m; cin>>n>>m;
    int max1=0;

    vector<vector<int>>mat(n, vector<int>(m));
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>mat[i][j];
            max1=max(max1, mat[i][j]);
        }
    }

    int l=max1+1000;
    vector<int>comp(l+1, 0);
    for(int i=2; i*i<=l; i++) {
        if(comp[i]) continue;
        for(int j=i*i; j<=l; j+=i) {
            comp[j]=1;
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            int val=mat[i][j];
            if(!comp[val] && val!=1) mat[i][j]=0;
            else {
                int next=val+1;
                while(comp[next]) next++;
                mat[i][j]=next-val;
            }
        }
    }

    int rowsum=INT_MAX;
    for(int i=0; i<n; i++) {
        int x=0;
        for(int j=0; j<m; j++) {
            x+=mat[i][j];
        }
        rowsum=min(rowsum, x);
    }

    int colsum=INT_MAX;
    for(int j=0; j<m; j++) {
        int x=0;
        for(int i=0; i<n; i++) {
            x+=mat[i][j];
        }
        colsum=min(colsum, x);
    }

    cout<<min(rowsum, colsum);
}
int main(){
    p();
    //int t; cin>>t; while(t--)
    code();
}
