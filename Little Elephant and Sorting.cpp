#include<bits/stdc++.h>
using namespace std;
long long x,arr[100002],cnt,ans,maxi,a,b;
int main(){
cin>>x;
for(int i=0;i<x;i++){
    cin>>arr[i];
}
arr[x]=1e11;
maxi=arr[0];
for(int i=0;i<=x;i++){
    if(arr[i]<maxi){
        if(arr[i]<arr[i-1]){
            a=maxi-arr[i-1];
            b=(maxi-arr[i])-a;
            ans+=b;
        }
    }
    else{
        maxi=arr[i];
    }
}
cout<<ans<<endl;
}
