#include<bits/stdc++.h>
using namespace std;
unsigned long long x,arr[501][501],no,a,b,sumr[501],sumc[501],cnt,p,sum,sum2;
int main(){
    cin>>x;
    if(x==1){
        cout<<"1"<<endl;
        exit(0);
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            cin>>arr[i][j];
            sumr[i]+=arr[i][j];
            sumc[j]+=arr[i][j];
            if(arr[i][j]==0){
                a=i;
                b=j;
            }
        }
    }
    if(a==x-1)p=0;
    else if(a==0)p=x-1;
    else p=0;
    if(sumr[p]<sumr[a]){
        cout<<"-1"<<endl;
        exit(0);
    }
    arr[a][b]=sumr[p]-sumr[a];
    for(int i=0;i<x;i++){
        sumr[i]=0;
        sumc[i]=0;
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            sumr[i]+=arr[i][j];
            sumc[j]+=arr[i][j];
        }
    }
    sort(sumr,sumr+x);
    sort(sumc,sumc+x);
    cnt=0;
    if(sumr[0]==sumr[x-1]&&sumc[0]==sumc[x-1]&&sumr[0]==sumc[0])cnt=1;
    if(!cnt){
        cout<<"-1"<<endl;
        exit(0);
    }
    cnt=0;
    for(int i=0;i<x;i++){
        sum+=arr[i][i];
        sum2+=arr[i][x-i-1];
    }
    if(sum==sumr[0]&&sum2==sumr[0])cnt=1;
    if(!cnt){
        cout<<"-1"<<endl;
        exit(0);
    }
    if(arr[a][b]>1000000000000000000||arr[a][b]<=0)cout<<"-1"<<endl,exit(0);
    cout<<arr[a][b]<<endl;
}
