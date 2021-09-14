#include<bits/stdc++.h>
using namespace std;
int x,y,arr[100000],sum,cnt,ind,ans;
int main(){
cin>>x>>y;
for(int i=0;i<x;i++){
    cin>>arr[i];
}
for(int i=0;i<x;i++){
    cnt++;
    sum+=arr[i];
    if(sum<=y){
        ans=max(ans,cnt);
    }
    else{
        sum-=arr[ind];
        ind++;
        cnt--;
    }
}
cout<<ans<<endl;
}
