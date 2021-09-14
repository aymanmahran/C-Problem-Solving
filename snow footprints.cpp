#include<bits/stdc++.h>
using namespace std;
int x,cnt,s,e;
string y;
char c='R',d='#';
int main(){
cin>>x>>y;
for(int i=0;i<x;i++){
    if(y[i]==c){
        s=i+1;
        swap(c,d);
    }
    if(y[i]=='L'){
        e=i;
        break;
    }
}
if(e==0){
    for(int i=0;i<x;i++){
        if(y[i]=='R'){
            e=max(e,i+1);
        }
    }
    e+=1;
}
else if(s==0){
    for(int i=0;i<x;i++){
        if(y[i]=='L'){
            s=max(s,i+1);
        }
    }
}
cout<<s<<" "<<e<<endl;
}
