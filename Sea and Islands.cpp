#include<bits/stdc++.h>
using namespace std;
int x,y,s;
char ss[101][101];
bool flag;
int main(){
cin>>x>>y;
for(int i=0;i<100;i++){
    for(int j=0;j<100;j++){
        ss[i][j]='S';
    }
}
if(x%2==0){
    s=(x/2)*x;
}
else{
    s=(x/2)*(x/2);
    s+=((x/2+1)*(x/2+1));
}
if(y>s){
    cout<<"NO"<<endl;
}
else{
        cout<<"YES"<<endl;
for(int j=0;j<x;j+=2){
    for(int i=0;i<x;i+=2){
            if(y==0){
            flag=true;
            break;
        }
        ss[j][i]='L';
        y--;
    }
    if(flag)break;
  }
for(int j=1;j<x;j+=2){
    for(int i=1;i<x;i+=2){
            if(y==0){
            flag=true;
            break;
        }
        ss[j][i]='L';
        y--;
    }
    if(flag)break;
}
  for(int i=0;i<x;i++){
    for(int j=0;j<x;j++){
        cout<<ss[i][j];
    }
    cout<<endl;
}
}
}
