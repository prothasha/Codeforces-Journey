#include<bits/stdc++.h>
using namespace std;
int main() {
    int A[5][5];
    int m=0, row, column;
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            cin>>A[i][j];
        }
    }
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            if(A[i][j]==1) {
                row=i;
                column=j;
            }
        }
    }
    m=abs(row-2)+abs(column-2);
    cout<<m<<endl;
    return 0;
}

