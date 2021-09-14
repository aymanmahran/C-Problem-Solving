#include<bits/stdc++.h>
using namespace std;
long long ans,x;
pair <long long,long long> arr[5000];
int main(){
cin>>x;
for(int i=0;i<x;i++){
    cin>>arr[i].first>>arr[i].second;
}
sort(arr,arr+x);
for(int i=0;i<x;i++){
    if(arr[i].second>=ans){
        ans=arr[i].second;
    }
    else{
        ans=arr[i].first;
    }
}
cout<<ans<<endl;
}
