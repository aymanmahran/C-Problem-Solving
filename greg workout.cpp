#include<bits/stdc++.h>
using namespace std;
int main(){
int x;
cin>>x;
int exec[x],sum[3]={0},cnt=0;
for(int i=0;i<x;i++){
    cin>>exec[i];
    sum[cnt]+=exec[i];
    if(cnt==2){
        cnt=0;
    }
    else{
        cnt++;
    }
}
if(sum[0]>sum[1]&&sum[0]>sum[2]){
    cout<<"chest"<<endl;
}
if(sum[1]>sum[0]&&sum[1]>sum[2]){
    cout<<"biceps"<<endl;
}
if(sum[2]>sum[1]&&sum[2]>sum[0]){
    cout<<"back"<<endl;
}
}
