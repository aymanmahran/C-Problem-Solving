#include<bits/stdc++.h>
using namespace std;
int x,y,arr[100],cnt;
int main(){
cin>>x>>y;
for(int i=0;i<x;i++){
    cin>>arr[i];
}
sort(arr,arr+x);
for(int i=0;i<y;i++){
    if(arr[i]<=0){
        cnt+=arr[i];
    }
}
cout<<abs(cnt)<<endl;
}
