#include<bits/stdc++.h>
using namespace std;
int main(){
int s,m,maxi,mini,x,cnt=0;
cin>>x;
int y[x];
m=101;
s=0;
for(int i=0;i<x;i++){
    cin>>y[i];
    if(y[i]<=m){
        m=y[i];
        mini=i;
    }
}
if(m==y[x-1]){
    mini=x-1;
}
if(mini!=x-1){
    while(mini!=x-1){
        swap(y[mini],y[mini+1]);
        cnt++;
        mini++;
    }
}
for(int i=0;i<x;i++){
    if(y[i]>s){
        s=y[i];
        maxi=i;
    }
}
if(s==y[0]){
    maxi=0;
}
if(maxi!=0){
    while(maxi!=0){
        swap(y[maxi],y[maxi-1]);
        cnt++;
        maxi--;
    }
}
cout<<cnt<<endl;
}
