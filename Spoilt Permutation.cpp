#include<bits/stdc++.h>
using namespace std;
int x,arr[1001],cnt,s,e,a,b;
bool flag;
int main(){
cin>>x;
for(int i=0;i<x;i++){
    cin>>arr[i];
}
arr[x]=x+1;
for(int i=0;i<=x;i++){
        a++;
    if(!flag){
        if(arr[i]!=a){
            cnt++;
            flag=true;
            s=i+1;
            b=arr[i];
        }
    }
    else{
        b--;
        if(arr[i]!=b){
            flag=false;
            e=i;
        }
    }
}
if(cnt==1&&s!=0&&e!=0){
    cout<<s<<" "<<e<<endl;
}
else{
    cout<<"0 0"<<endl;
}
}
