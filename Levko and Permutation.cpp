#include<bits/stdc++.h>
using namespace std;
int x,y,arr[100000];
int main(){
cin>>x>>y;
if((x-1)<y){
    cout<<"-1"<<endl;
}
else{
    for(int i=0;i<x;i++){
        arr[i]=i+1;
    }
    for(int i=(x-y)-1;i>0;i--){
        swap(arr[i],arr[i-1]);
    }
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
}
