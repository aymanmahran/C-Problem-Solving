#include<bits/stdc++.h>
using namespace std;
int x,y,arr[2000],mini,maxi,ans,rem,mm;
int main(){
cin>>x>>y;
for(int i=0;i<x;i++){
    cin>>arr[i];
}
mm=y;
for(int i=0;i<x;i++){
        maxi=arr[i];
        mini=1e9;
        ans=y;
    for(int j=0;j<i;j++){
        mini=min(arr[j],mini);
  }
  if(mini<=y){
        rem=ans%mini;
        ans-=rem;
        ans/=mini;
        ans*=maxi;
        ans+=rem;
        mm=max(mm,ans);
  }
}
cout<<mm<<endl;
}
