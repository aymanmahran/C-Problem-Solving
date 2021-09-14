#include<bits/stdc++.h>
using namespace std;
int main(){
int x,sum=0;
cin>>x;
int arr[x];
for(int i=0;i<x;i++){
    cin>>arr[i];
}
sort(arr,arr+x);
while(arr[0]!=arr[x-1]){
    for(int i=0;i<x-1;i++){
            if(arr[i]!=arr[i+1]){
        arr[i+1]=fabs(arr[i+1]-arr[i]);
    }
    }
    sort(arr,arr+x);
}
for(int i=0;i<x;i++){
    sum+=arr[i];
}
cout<<sum<<endl;
}
