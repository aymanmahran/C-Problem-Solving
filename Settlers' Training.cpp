#include<bits/stdc++.h>
using namespace std;
int x,y,arr[100],t[101],cnt;
int main(){
cin>>x>>y;
for(int i=0;i<x;i++){
    cin>>arr[i];
}
for(;;){
    sort(arr,arr+x);
    if(arr[0]==y){
        break;
    }
else{
    for(int i=0;i<x;i++){
        if(t[arr[i]]==0){
            t[arr[i]]=1;
            arr[i]++;
        }
    }
    cnt++;
        for(int i=0;i<y;i++){
            t[i]=0;
        }
}
}
cout<<cnt<<endl;
}
