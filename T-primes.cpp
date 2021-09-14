#include<bits/stdc++.h>
using namespace std;
int64_t y,z;
int x,arr[1000001];
int main(){
cin>>x;
for(int i=2;i<=1000;i++){
    for(int j=i*2;j<=1000000;j+=i){
        arr[j]=1;
    }
}
for(int i=0;i<x;i++){
    cin>>y;
    z=sqrt(y);
    if((z*z)==y){
        if(arr[z]==0&&z!=y){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
    }
}
}
