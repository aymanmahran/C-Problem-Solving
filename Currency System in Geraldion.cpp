#include<bits/stdc++.h>
using namespace std;
long long x,arr[1000];
int main(){
cin>>x;
for(int i=0;i<x;i++){
    cin>>arr[i];
}
sort(arr,arr+x);
if(arr[0]==1){
    cout<<"-1"<<endl;
}
else{
    cout<<"1"<<endl;
}
}
