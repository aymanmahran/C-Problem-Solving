#include<bits/stdc++.h>
using namespace std;
int x,arr[1000],cnt,ans,mini;
int main(){
cin>>x;
for(int i=0;i<x;i++){
    cin>>arr[i];
}
for(int i=0;i<x;i++){
        mini=arr[i];
        cnt=0;
    for(int j=i+1;j<x;j++){
        if(arr[j]<=mini){
            mini=arr[j];
            cnt++;
        }
        else{
            break;
        }
    }
        mini=arr[i];
        for(int j=i;j>=0;j--){
            if(arr[j]<=mini){
            mini=arr[j];
            cnt++;
        }
        else{
            break;
        }
        }
    ans=max(ans,cnt);
}
cout<<ans<<endl;
}
