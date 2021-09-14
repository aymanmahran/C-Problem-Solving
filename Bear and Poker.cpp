#include<bits/stdc++.h>
using namespace std;
long long x,arr[100000],big;
set<long long> s;
long long tot(long long z,int y){
if(z%y!=0||z==1){
    return z;
 }
if(z%y==0){
    tot(z/y,y);
}
}
int main(){
cin>>x;
for(int i=0;i<x;i++){
    cin>>arr[i];
    arr[i]=tot(arr[i],2);
    arr[i]=tot(arr[i],3);
}
sort(arr,arr+x,greater<long long>());
for(int i=0;i<x;i++){
    s.insert(arr[i]);
}
if(s.size()!=1){
    cout<<"No"<<endl;
  }
else{
   cout<<"Yes"<<endl;
 }
}
