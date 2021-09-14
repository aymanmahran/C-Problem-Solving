#include<bits/stdc++.h>
using namespace std;
int x,y,d,f[101],s[101];
int main(){
cin>>x>>y;
    for(int i=0;i<=x;i++){
        cin>>f[i];
    }
    for(int i=0;i<=y;i++){
        cin>>s[i];
    }
    if(x==y){
    d=__gcd(f[0],s[0]);
    if(s[0]/d<0){
        s[0]*=-1;
    if(f[0]/d>0){
        f[0]*=-1;
    }
    }
    cout<<f[0]/d<<"/"<<s[0]/d<<endl;
    }
    else if(x>y){
        if((f[0]>0&&s[0]>0)||(f[0]<0&&s[0]<0)){
            cout<<"Infinity"<<endl;
        }
        else{
            cout<<"-Infinity"<<endl;
    }
    }
    else{
        cout<<"0/1"<<endl;
    }
}
