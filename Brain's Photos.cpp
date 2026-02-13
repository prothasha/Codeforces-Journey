#include<bits/stdc++.h>
using namespace std;
int main() {
    int r, c;
    cin>>r>>c;
    char mat[r][c];
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            cin>>mat[i][j];
        }
    }
    int co=0;
    int p=r*c;
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            if(mat[i][j]=='W' || mat[i][j]=='B' || mat[i][j]=='G') co++;
        }
    }
    if(co==p) cout<<"#Black&White";
    else cout<<"#Color";
    return 0;
}

