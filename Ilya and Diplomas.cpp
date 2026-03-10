#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int n, min1, max1, min2, max2, min3, max3;
    cin>>n>>min1>>max1>>min2>>max2>>min3>>max3;
    int d1=min1, d2=min2, d3=min3;
    int x=n-(min1+min2+min3);
    int s1=min(x,max1-d1);
    d1+=s1;
    x-=s1;
    int s2=min(x,max2-d2);
    d2+=s2;
    x-=s2;
    d3+=x;
    cout<<d1<<" "<<d2<<" "<<d3<<endl;
}
int main(){
    p();
    //int t; cin>>t; while(t--)
    code();
}
