#include<bits/stdc++.h>
using namespace std;
int main(){
int x,one=0,two=0;
cin>>x;
string s[x],d;
for(int i=0;i<x;i++){
    cin>>s[i];
}
d=s[0];
string f;
for(int i=0;i<x;i++){
        if(s[i]==d){
            one++;
        }
        else{
                f=s[i];
            two++;
        }
}
if(one>two){
    cout<<d<<endl;
}
else{
    cout<<f<<endl;
}
}
