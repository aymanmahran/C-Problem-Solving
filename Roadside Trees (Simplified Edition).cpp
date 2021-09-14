#include<bits/stdc++.h>
using namespace std;
int64_t x,arr[100000],cnt,s;
int main(){
cin>>x;
for(int i=0;i<x;i++){
    cin>>arr[i];
}
cnt+=arr[0];
cnt++;
for(int i=1;i<x;i++){
        s=0;
    if(arr[i]<arr[i-1]){
        cnt+=(arr[i-1]-arr[i]);
        s=arr[i];
    }
else{
    s=arr[i-1];
}
    cnt++;
    cnt+=(arr[i]-s);
    cnt++;
}
cout<<cnt<<endl;
}
