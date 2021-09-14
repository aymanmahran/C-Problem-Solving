#include<bits/stdc++.h>
using namespace std;
int x,sum,a[100],b[100],cnt,dnt;
map<int,int>arr;
int main(){
cin>>x;
for(int i=0;i<x;i++){
    cin>>a[i]>>b[i];
    arr[a[i]]=b[i];
    sum+=b[i];
    if(a[i]<0)cnt++;
}
dnt=x-cnt;
if(dnt==cnt){
    cout<<sum<<endl;
}
else if(dnt<cnt){
    sum=0;
    cnt=dnt+1;
    for(int i=1;;i++){
        if(dnt==0){
            break;
        }
        if(arr[i]!=0){
            sum+=arr[i];
            dnt--;
        }
    }
    for(int i=-1;;i--){
        if(cnt==0){
            break;
        }
        if(arr[i]!=0){
            sum+=arr[i];
            cnt--;
        }
    }
    cout<<sum<<endl;
}
else if(dnt>cnt){
    sum=0;
    dnt=cnt+1;
    for(int i=1;;i++){
        if(dnt==0){
            break;
        }
        if(arr[i]!=0){
            sum+=arr[i];
            dnt--;
        }
    }
    for(int i=-1;;i--){
        if(cnt==0){
            break;
        }
        if(arr[i]!=0){
            sum+=arr[i];
            cnt--;
        }
    }
    cout<<sum<<endl;
}
}
