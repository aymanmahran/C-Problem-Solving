#include<bits/stdc++.h>
using namespace std;
long long ans,x,arr[100],ans2,y;
void tot(int s,int e,long long sum,int cnt){
if(cnt==x-1){
        ans=max(ans,sum);
    return;
}
if(cnt%2==0){
tot(s+1,e,sum+arr[s],cnt+1);
tot(s,e-1,sum+arr[e],cnt+1);
}
else{
    if(arr[s]>arr[e]){
        tot(s+1,e,sum,cnt+1);
    }
    else{
        tot(s,e-1,sum,cnt+1);
    }
}
}
void non(int s,int e,long long sum,int cnt){
if(cnt==x-1){
    ans2=max(ans2,sum);
    return;
}
if(cnt%2==0){
non(s+1,e,sum+arr[s],cnt+1);
non(s,e-1,sum+arr[e],cnt+1);
}
else{
    non(s+1,e,sum,cnt+1);
    non(s,e-1,sum,cnt+1);
}
}
int main(){
    cin>>y;
    for(int j=0;j<y;j++){
cin>>x;
for(int i=0;i<x;i++){
    cin>>arr[i];
}
tot(0,x-1,0,0);
non(0,x-1,0,0);
cout<<ans2<<" "<<ans<<endl;
ans=0;
ans2=0;
}
}
