#include<bits/stdc++.h>
using namespace std;
long long x;
long long arr[500001],arr2[500001],pl,cnt[500001],ans;
int main(){
cin>>x;
for(int i=0;i<x;i++){
    cin>>arr[i];
    arr2[i]=arr[i]+pl;
    pl+=arr[i];
}
if(pl%3==0){
pl=arr2[x-1]/3;
for(int i=x-1;i>=0;i--){
    arr[i]+=arr[i+1];
    if(arr[i]==pl){
        cnt[i]=1;
    }
}
for(int i=x-2;i>=0;i--){
    cnt[i]+=cnt[i+1];
}
for(int i=0;i<x-2;i++){
    if(arr2[i]==pl){
        ans+=cnt[i+2];
   }
}
cout<<ans<<endl;
}
else{
    cout<<"0"<<endl;
}
}
