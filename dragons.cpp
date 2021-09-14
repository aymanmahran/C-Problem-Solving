#include<bits/stdc++.h>
using namespace std;
int main(){
long long k,l,m,n,d,cnt=0,a=1;
cin>>k>>l>>m>>n>>d;
long long arr[d];
for(int i=0;i<d;i++){
    arr[i]=a;
    a++;
}
for(long long i=0;i<d;i++){
    if(arr[i]%k==0){
        arr[i]=0;
    }
     if(arr[i]%l==0){
        arr[i]=0;
    }
     if(arr[i]%m==0){
        arr[i]=0;
    }
     if(arr[i]%n==0){
        arr[i]=0;
    }
}
for(int i=0;i<d;i++){
   if(arr[i]==0){
    cnt++;
   }
}
cout<<cnt<<endl;
}
