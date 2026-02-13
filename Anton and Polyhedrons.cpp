#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, c=0;
    cin>>n;
    while(n--) {
        string w;
        cin>>w;
        if(w=="Tetrahedron") c=c+4;
        if(w=="Cube") c=c+6;
        if(w=="Octahedron") c=c+8;
        if(w=="Dodecahedron") c=c+12;
        if(w=="Icosahedron") c=c+20;
    }
    cout<<c;
    return 0;
}
