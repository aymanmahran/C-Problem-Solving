#include<bits/stdc++.h>
using namespace std;
int x,y;
bool flag;
char c;
int main(){
    cin>>x>>y;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>c;
            if(c=='C'||c=='M'||c=='Y')flag=true;
        }
    }
    if(flag)cout<<"#Color"<<endl;
    else cout<<"#Black&White"<<endl;
}
