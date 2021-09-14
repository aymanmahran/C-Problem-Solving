#include<bits/stdc++.h>
using namespace std;
int n,t,arr[100000];
long long cnt;
int main(){
cin>>n>>t;
for(int i=0;i<t;i++){
    cin>>arr[i];
}
cnt=arr[0]-1;
for(int i=0;i<t-1;i++){
    if(arr[i]<=arr[i+1]){
        cnt+=arr[i+1]-arr[i];
    }
    else if(arr[i]>arr[i+1]){
        cnt+=arr[i+1];
        cnt+=(n-arr[i]);
    }
}
cout<<cnt<<endl;
}
