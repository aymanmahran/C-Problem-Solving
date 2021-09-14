#include<bits/stdc++.h>
using namespace std;
long long x,y,arr[101],z,w,maxi=-1,ans=-1,a;
int main(){
cin>>x>>y;
for(int i=0;i<y;i++){
    for(int j=0;j<x;j++){
        cin>>z;
        if(z>maxi){
           maxi=z;
           w=j+1;
        }
    }
    arr[w]++;
    maxi=-1;
}
for(int i=1;i<=x;i++){
    if(arr[i]>ans){
        ans=arr[i];
        a=i;
    }
}
cout<<a<<endl;
}
