#include<bits/stdc++.h>
using namespace std;
int x,arr[1000],cnt;
bool flag;
int main(){
cin>>x;
for(int i=0;i<x;i++){
    cin>>arr[i];
}
for(int i=1;i<x;i++){
        flag=false;
    for(int j=0;j<i;j++){
        if(arr[i]>=arr[j]){
            flag=true;
            break;
        }
    }
    if(!flag)cnt++;

    else{
            flag=false;
        for(int j=0;j<i;j++){
        if(arr[i]<=arr[j]){
            flag=true;
            break;
        }
    }
    if(!flag)cnt++;

    flag=false;
    }
}
cout<<cnt<<endl;
}
