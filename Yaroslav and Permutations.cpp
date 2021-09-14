#include<bits/stdc++.h>
using namespace std;
int main(){
int x,dnt=0,v=0,start,sum=0,z=0;
cin>>x;
int arr[x];
int *cnt=new int[2];
for(int i=0;i<x;i++){
    cin>>arr[i];
}
sort(arr,arr+x);
start=arr[0];
cnt[0]=0;
for(int i=0;i<x;i++){
    if(start==arr[i]){
        cnt[v]++;
    }
    else{
        v++;
        start=arr[i];
        cnt[v]=0;
    }
}
v++;
for(int i=1;i<v;i++){
    cnt[i]++;
}
for(int j=0;j<v;j++){
        sum+=cnt[j];
    }
    int sum1=sum;
sort(cnt,cnt+v);
for(int i=0;i<v;i++){
    sum-=cnt[i];
    sum+=1;
    if(cnt[i]>sum){
        z=1;
        break;
    }
    sum=sum1;
}
if(z==0){
    cout<<"YES"<<endl;
}
else if(z==1){
    cout<<"NO"<<endl;
}
}
