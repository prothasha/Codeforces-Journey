#include<bits/stdc++.h>
using namespace std;
int main(){
    int co1=0, co2=0;
    for(int i=0; i<8; i++){
        string s; cin>>s;
        for(char i: s){
            if(i=='Q') co1+=9;
            else if(i=='q') co2+=9;
            else if(i=='R') co1+=5;
            else if(i=='r') co2+=5;
            else if(i=='B') co1+=3;
            else if(i=='b') co2+=3;
            else if(i=='N') co1+=3;
            else if(i=='n') co2+=3;
            else if(i=='P') co1+=1;
            else if(i=='p') co2+=1;
        }
    }
    if(co1>co2) cout<<"White"<<endl;
    else if(co2>co1) cout<<"Black"<<endl;
    else cout<<"Draw"<<endl;
}
