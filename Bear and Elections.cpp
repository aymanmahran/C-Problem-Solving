#include<bits/stdc++.h>
using namespace std;
int x,arr[100],cnt,me;
bool flag;
int main(){
cin>>x;
for(int i=0;i<x;i++){
    cin>>arr[i];
}
me=arr[0];
arr[0]=0;
flag=true;
while(flag){
        flag=false;
        sort(arr,arr+x,greater<int>());
  for(int i=0;i<x;i++){
     if(arr[i]>=me){
        me++;
        arr[i]--;
        flag=true;
        cnt++;
        break;
    }
  }
}
cout<<cnt<<endl;
/*for(int i=0;i<x;i++){
    cout<<arr[i]<<" ";
}
cout<<me<<endl;*/
}
