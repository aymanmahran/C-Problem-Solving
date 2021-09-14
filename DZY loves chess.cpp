#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
string s[x];
char w='W',b='B';
for(int i=0;i<x;i++){
    cin>>s[i];
}
for(int i=0;i<x;i+=2){
    if(s[i][0]!='-'){
        s[i][0]='B';
    }
}
for(int i=1;i<x;i+=2){
    if(s[i][0]!='-'){
        s[i][0]='W';
    }
}
for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
        if(s[i][j]=='.'&&j%2==0){
        s[i][j]=b;
    }
       if(s[i][j]=='.'&&j%2==1){
        s[i][j]=w;
    }
    }
    swap(b,w);
}
for(int i=0;i<x;i++){
    cout<<s[i]<<endl;
}
}
