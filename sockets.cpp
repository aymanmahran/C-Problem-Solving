#include<bits/stdc++.h>
using namespace std;
int nofs,nofd,nofp,arr[50],ans;
int main(){
cin>>nofs>>nofd>>nofp;
for(int i=0;i<nofs;i++){
    cin>>arr[i];
}
if(nofd<=nofp){
    cout<<"0"<<endl;
}
else{
sort(arr,arr+nofs,greater<int>());
nofd-=nofp;
for(int i=0;i<nofs;i++){
nofd+=1;
nofd-=arr[i];
ans++;
if(nofd<=0){
    cout<<ans<<endl;
    exit(0);
}
}
cout<<"-1"<<endl;
}
}
