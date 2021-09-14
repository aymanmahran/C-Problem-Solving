#include<bits/stdc++.h>
using namespace std;
int x,y,arr[3002];
int main(){
cin>>x;
for(int i=0;i<x;i++){
    cin>>y;
    arr[y]=y;
}
for(int i=1;i<3002;i++){
    if(arr[i]==0){
        cout<<i<<endl;
        break;
    }
}
}
