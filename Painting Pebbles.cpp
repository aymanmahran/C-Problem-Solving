#include<bits/stdc++.h>
using namespace std;
int x,y,arr[100],sz=1e9,ma,ans[200],no=1;
int main(){
cin>>x>>y;
for(int i=0;i<x;i++){
    cin>>arr[i];
    sz=min(sz,arr[i]);
    ma=max(ma,arr[i]);
}
if(ma>(sz+y)){
    cout<<"NO"<<endl;
}
else{
        cout<<"YES"<<endl;
    for(int i=0;i<(sz+y);i++){
        ans[i]=no;
        if(i>=sz){
            no++;
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<arr[i];j++){
            cout<<ans[j]<<" ";
        }
        cout<<endl;
    }
}
}
