#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y,time=0,start=0,cnt=1;
cin>>x>>y;
int arr[x+1],arr2[x+1];
arr[0]=1;
arr2[0]=1;
for(int i=1;i<x+1;i++){
    cin>>arr[i]>>arr2[i];
}

for(int i=0;i<x;i++){
        start=cnt;
    for(int j=start;j<=arr[i+1];j+=y){
        cnt+=y;
    if(cnt>arr[i+1]){
        cnt-=y;
    }
    }
    for(int k=cnt;k<=arr2[i+1];k++){
        time+=1;
        cnt++;
    }
}

cout<<time<<endl;
}
