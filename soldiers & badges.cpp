#include<bits/stdc++.h>
using namespace std;
int main(){
long long x,y=0,cnt=0,z=0,l=0;
cin>>x;
x=static_cast<const int>(x);
long long arr[x];
for(int i=0;i<x;i++){
    cin>>arr[i];
}
sort(arr,arr+x);
for(int j=0;j<x;j++){
    for(int i=0;i<x;i++){
            if(j!=i){
            if(arr[j]==arr[i]){
            cnt++;
            arr[i]++;
        }
            }
    }
    sort(arr,arr+x);
}
    cout<<cnt;
}

