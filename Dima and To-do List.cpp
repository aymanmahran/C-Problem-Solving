#include<bits/stdc++.h>
using namespace std;
long long x,y,arr[100000],sum,ans=1e9,start;
int main(){
cin>>x>>y;
for(int i=0;i<x;i++){
    cin>>arr[i];
}
for(int i=0;i<y;i++){
    for(int j=i;j<x;j+=y){
        sum+=arr[j];
    }
    if(sum<ans){
        ans=sum;
        start=i+1;
    }
    sum=0;
}
cout<<start<<endl;
}
