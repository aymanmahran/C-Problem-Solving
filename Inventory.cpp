#include<bits/stdc++.h>
using namespace std;
int x,arr[100000],ans[100001],spare[100000],cnt;
int main(){
cin>>x;
for(int i=0;i<x;i++){
    cin>>arr[i];
    ans[arr[i]]++;
}
for(int i=1;i<=100000;i++){
    if(ans[i]==0){
        spare[cnt]=i;
        cnt++;
    }
}
cnt=0;
for(int i=0;i<x;i++){
    if(ans[arr[i]]==1&&arr[i]<=x){
        cout<<arr[i]<<" ";
    }
    else if(ans[arr[i]]>1||arr[i]>x){
        ans[arr[i]]--;
        cout<<spare[cnt]<<" ";
        cnt++;
    }
}
cout<<endl;
}
