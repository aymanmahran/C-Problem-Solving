#include<bits/stdc++.h>
using namespace std;
int x,y,st[101],en[101],a,b,arr[1001],dif,ans=1e9;
int main(){
cin>>x>>y;
for(int i=0;i<x;i++){
    cin>>st[i]>>en[i];
}
for(int i=0;i<x;i++){
   for(int j=min(st[i],en[i]);j<=max(st[i],en[i]);j++){
        arr[j]++;
   }
}
for(int i=0;i<=1000;i++){
    if(arr[i]==x){
        dif=abs(y-i);
        ans=min(ans,dif);
    }
}
if(ans==1e9)ans=-1;

cout<<ans<<endl;
}
