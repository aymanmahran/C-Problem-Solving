#include<bits/stdc++.h>
using namespace std;
int x,a[10],b[10],arr[56],y,z,f,s,t;
int main(){
cin>>x;
for(int i=0;i<x;i++){
    cin>>a[i]>>b[i];
    y=(a[i]*10)+b[i];
    z=(b[i]*10)+a[i];
    arr[y]=1;
    arr[z]=1;
}
for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        if(i!=j){
        for(int k=1;k<=5;k++){
            if(i!=j&&i!=k&&j!=k){
                f=(i*10)+j;
                s=(j*10)+k;
                t=(k*10)+i;
                if(arr[f]==0&&arr[s]==0&&arr[t]==0){
                    cout<<"WIN"<<endl;
                    exit(0);
                }
            }
        }
    }
  }
}
for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
        if(i!=j){
        for(int k=1;k<=5;k++){
            if(i!=j&&i!=k&&j!=k){
                f=(i*10)+j;
                s=(j*10)+k;
                t=(k*10)+i;
                if(arr[f]==1&&arr[s]==1&&arr[t]==1){
                    cout<<"WIN"<<endl;
                    exit(0);
                }
            }
        }
    }
  }
}
cout<<"FAIL"<<endl;
}
