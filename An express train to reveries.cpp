#include<bits/stdc++.h>
using namespace std;
int x,arr[2000],arr2[2000],ans[2000],ind,z[3],ch[2000],y[3],ind2,cnt1,cnt2,cnt3;
int main(){
    cin>>x;
    for(int i=0;i<x;i++)cin>>arr[i];
    for(int i=0;i<x;i++)cin>>arr2[i];
    for(int i=0;i<x;i++){
        if(arr[i]==arr2[i])ans[i]=arr[i],ch[arr[i]]=1;
        else{
            z[ind]=i;
            ind++;
        }
    }
    for(int i=1;i<=x;i++){
        if(!ch[i]){
            y[ind2]=i;
            ind2++;
        }
    }
    if(ind==1)ans[z[0]]=y[0];
    else{
        ans[z[0]]=y[0];
        ans[z[1]]=y[1];
        for(int i=0;i<x;i++){
            if(arr[i]!=ans[i])cnt1++;
            if(arr2[i]!=ans[i])cnt2++;
            if(arr[i]!=arr2[i])cnt3++;
        }
        if(cnt1!=1||cnt2!=1||cnt3==0){
            ans[z[0]]=y[1];
            ans[z[1]]=y[0];
        }
    }
    for(int i=0;i<x;i++)cout<<ans[i]<<" ";
    cout<<endl;
}
