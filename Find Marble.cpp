#include<bits/stdc++.h>
using namespace std;
int x,s,e,arr[100000],cnt=1,a,u;
int main(){
cin>>x>>s>>e;
for(int i=0;i<x;i++){
    cin>>arr[i];
}
a=arr[s-1];
if(s==e){
    cout<<"0"<<endl;
    exit(0);
}
while(true){
    if(arr[a-1]!=-1){
        if(a==e){
            break;
        }
        else{
            u=a;
            a=arr[a-1];
            arr[u-1]=-1;
            cnt++;
        }
    }
    else{
        cout<<"-1"<<endl;
        exit(0);
    }
}
cout<<cnt<<endl;
}
