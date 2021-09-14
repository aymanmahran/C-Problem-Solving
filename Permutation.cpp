#include<bits/stdc++.h>
using namespace std;
int x,y,arr[100000],z;
int main(){
cin>>x>>y;
y*=2;
z=x;
for(int i=0;i<(x*2);i++){
    arr[i]=i+1;
}
for(int i=0;i<x;i+=2){
    swap(arr[i],arr[i+1]);
}

if(x%2==1){
    swap(arr[x],arr[x-1]);
    x--;
}
for(int i=0;i<(x-y);i+=2){
    swap(arr[i],arr[i+1]);
}
for(int i=0;i<(z*2);i++){
cout<<arr[i]<<" ";
}
cout<<endl;
}
