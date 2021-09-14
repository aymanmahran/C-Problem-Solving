#include<bits/stdc++.h>
using namespace std;
int x,y,arr[100001],a,b,ans,arr2[100001],no,non,pos[100001];
void finds(int st){
    if(arr[st])no++;
    else{
        non=max(no,non);
        no=0;
    }
    if(st<=1){
        non=max(no,non);
        return;
    }
    else finds(pos[st]);

    return;
}
int main(){
cin>>x>>y;
for(int i=1;i<=x;i++){
    cin>>arr[i];
    pos[i]=1e9;
}
for(int i=0;i<x-1;i++){
    cin>>a>>b;
    arr2[a]++;
    arr2[b]++;
    pos[a]=min(pos[a],b);
    pos[b]=min(pos[b],a);
}
pos[1]=1;
for(int i=2;i<=x;i++){
     //   cout<<pos[i]<<endl;
    if(arr2[i]==1){
        finds(i);
        if(non<=y)ans++;
        non=0;
        no=0;
    }
}
cout<<ans<<endl;
}
