#include<bits/stdc++.h>
using namespace std;
int x,y,mid,mid1,dif=-1,arr[100000];
int main(){
cin>>x>>y;
if(y%2==0){
    mid=y/2;
    arr[0]=mid;
    arr[1]=mid+1;
    mid1=mid+1;
    for(int i=2;i<y;i+=2){
        mid+=dif;
        arr[i]=mid;
        mid1+=(dif*-1);
        arr[i+1]+=mid1;
    }
}
else{
    mid=(y+1)/2;
    arr[0]=mid;
    for(int i=1;i<y;i++){
        mid+=dif;
        arr[i]=mid;
        if(dif<0)dif--;
        else dif++;

        dif*=-1;
    }
}
for(int i=0;i<x;i++){
    cout<<arr[(i%y)]<<endl;
}
}
