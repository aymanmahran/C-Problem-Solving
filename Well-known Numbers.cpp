#include<bits/stdc++.h>
using namespace std;
long long x,y,cnt,dnt;
map<long long,long long>arr,ans;
int main(){
cin>>x>>y;
arr[y]=1;
arr[y+1]=1;
for(long long i=y+2;;i++){
    arr[i]=(arr[i-1]*2)-arr[i-(y+1)];
    cnt++;
    if(arr[i]>=x)break;
}
for(long long i=cnt+(y+1);i>y;i--){
    if(arr[i]<=x){
        x-=arr[i];
        ans[dnt]=arr[i];
        dnt++;
    }
    if(x==0){
        break;
    }
}
if(dnt==1){
    ans[dnt]=0;
    dnt++;
}
cout<<dnt<<endl;
for(int i=0;i<dnt;i++){
    cout<<ans[i]<<" ";
}
cout<<endl;
}
