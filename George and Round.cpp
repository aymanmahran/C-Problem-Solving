#include<bits/stdc++.h>
using namespace std;
long long x,y,arr[3000],ans[3000],z,cnt;
bool flag;
int main(){
cin>>x>>y;
for(int i=0;i<x;i++){
    cin>>arr[i];
}
for(int i=0;i<y;i++){
    cin>>ans[i];
}
for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
        if(arr[i]<=ans[j]){
            ans[j]=-1;
            flag=true;
            break;
        }
    }
    if(!flag){
        cnt++;
    }
    flag=false;
}
cout<<cnt<<endl;
}
