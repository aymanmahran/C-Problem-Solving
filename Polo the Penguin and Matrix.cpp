#include<bits/stdc++.h>
using namespace std;
int x,z,arr[10000],y,cnt,ans=1e9;
bool flag;
int main(){
cin>>x>>y>>z;
for(int i=0;i<(x*y);i++){
    cin>>arr[i];
}
sort(arr,arr+(x*y));
for(int j=0;j<(x*y);j++){
        flag=true;
        cnt=0;
    for(int i=0;i<(x*y);i++){
            if(i!=j){
        int dif=abs(arr[i]-arr[j]);
        if(dif%z==0){
            cnt+=(dif/z);
        }
        else{
            flag=false;
            break;
        }
            }
    }
    if(flag)ans=min(ans,cnt);
}
if(ans==1e9)cout<<"-1"<<endl;
else cout<<ans<<endl;
}
