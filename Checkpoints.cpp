#include<bits/stdc++.h>
using namespace std;
int x,y,arr[100001],ans,ind;
int main(){
    cin>>x>>y;
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    arr[x]=y;
    x++;
    sort(arr,arr+x);
    //for(int i=0;i<x;i++)cout<<arr[i]<<" ";
    //cout<<endl;
    for(int i=0;i<x;i++){
        if(arr[i]==y){
            ind=i;
            break;
        }
    }
    y=arr[ind];
    ans=min(min(abs(arr[0]-y)*2+abs(arr[x-2]-y),abs(arr[x-2]-y)*2+abs(arr[0]-y)),min(abs(arr[1]-y)*2+abs(arr[x-1]-y),abs(arr[x-1]-y)*2+abs(arr[1]-y)));
    cout<<ans<<endl;
}
