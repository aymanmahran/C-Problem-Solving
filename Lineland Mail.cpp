#include<bits/stdc++.h>
using namespace std;
long long x,arr[100000],dist,maxi,mini;
int main(){
cin>>x;
for(int i=0;i<x;i++){
    cin>>arr[i];
}
cout<<abs(arr[0]-arr[1])<<" "<<abs(arr[0]-arr[x-1])<<endl;
for(int i=1;i<x-1;i++){
    mini=abs(arr[i]-arr[i-1]);
    dist=abs(arr[i]-arr[i+1]);
    mini=min(mini,dist);
    cout<<mini<<" ";
    maxi=abs(arr[i]-arr[0]);
    dist=abs(arr[i]-arr[x-1]);
    maxi=max(maxi,dist);
    cout<<maxi<<endl;
}
cout<<abs(arr[x-1]-arr[x-2])<<" "<<abs(arr[x-1]-arr[0])<<endl;
}
