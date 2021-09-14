#include<bits/stdc++.h>
using namespace std;
int x,arr[100001],s,ans,st,st1;
int main(){
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=x;i++){
        if(arr[i]>arr[i-1])st++,st1=0;
        else if(arr[i]<arr[i-1])st=0,st1++;
        if(st>1||st1>1||i==x){
            ans=max(ans,i-s);
            //cout<<i<<" "<<i-s<<endl;
            if(st>1)st=1;
            else st1=1;
            for(int k=i-1;k>=0;k--){
                if(arr[k]==arr[i-1])s=k;
                else break;
            }
        }
        //cout<<st<<endl;
    }
    cout<<ans<<endl;
}
