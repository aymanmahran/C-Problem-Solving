#include<bits/stdc++.h>
using namespace std;
int x,arr[2000],pos[2001],arr2[2000];
int main(){
cin>>x;
for(int i=0;i<x;i++){
    cin>>arr[i];
    arr2[i]=arr[i];
}
sort(arr,arr+x,greater<int>());
for(int i=0;i<x;i++){
    if(pos[arr[i]]==0){
    pos[arr[i]]=i+1;
    }
}
for(int i=0;i<x;i++){
    cout<<pos[arr2[i]]<<" ";
}
cout<<endl;
}
