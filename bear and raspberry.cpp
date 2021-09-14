#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
int arr[x];
for(int i=0;i<x;i++){
    cin>>arr[i];
}
int maxi=0;
for(int i=0;i<x;i++){
        if(i!=(x-1)){
    int z=arr[i]-arr[i+1];
    z-=y;
    maxi=max(maxi,z);
}
}
cout<<maxi<<endl;
}
