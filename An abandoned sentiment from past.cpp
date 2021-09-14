#include<bits/stdc++.h>
using namespace std;
int x,y,arr[1000],arr2[1000],cnt;
int main(){
    cin>>x>>y;
    for(int i=0;i<x;i++)cin>>arr[i];
    for(int i=0;i<y;i++)cin>>arr2[i];
    sort(arr2,arr2+y,greater<int>());
    for(int i=0;i<x;i++){
        if(!arr[i])arr[i]=arr2[cnt],cnt++;
    }
    for(int i=0;i<x-1;i++){
        if(arr[i]>arr[i+1])cout<<"Yes"<<endl,exit(0);
    }
    cout<<"No"<<endl;
}
