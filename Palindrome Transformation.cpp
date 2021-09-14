#include<bits/stdc++.h>
using namespace std;
int x,y,ans,st,en;
double si;
string s;
int main(){
cin>>x>>y>>s;
for(int i=0,j=x-1;i<x/2;i++,j--){
    if(s[i]!=s[j]){
        st=i+1;
        break;
    }
}
for(int i=0,j=x-1;i<x/2;i++,j--){
    if(s[i]!=s[j]){
        en=i+1;
    }
}
si=(double)(x+1)/2;
if(y>si){
    y=si-(y-si);
}
if(st<=y&&y<=en&&en!=0){
ans=min(abs(st-y),abs(y-en))*2+max(abs(st-y),abs(y-en));
}
else if(en!=0){
ans=max(abs(st-y),abs(en-y));
}
//cout<<y<<" "<<st<<" "<<en<<endl;
for(int i=0,j=x-1;i<x/2;i++,j--){
    ans+=min(abs(s[i]-s[j]),abs(min(s[i],s[j])-96)+abs(max(s[i],s[j])-122));
  //  cout<<ans<<endl;
}
cout<<ans<<endl;
}
