#include<bits/stdc++.h>
using namespace std;
int main(){
int x;
cin>>x;
if(x==1||x==2){
    cout<<"-1"<<endl;
}
else{
    int arr[x],y=0;
    for(int i=x;i>0;i--){
        arr[y]=i;
        y++;
    }
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
}
