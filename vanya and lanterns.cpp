#include<bits/stdc++.h>
using namespace std;
int main(){
long long x,y;
long double mini=0;
cin>>x>>y;
long long arr[x];
for(long long i=0;i<x;i++){
    cin>>arr[i];
}
sort(arr,arr+x);
mini=arr[0];
for(long long i=0;i<x-1;i++){
        long double dif=(arr[i+1]-arr[i])/2.0000000000;
    if(dif>mini){
        mini=dif;
    }
}
long double c=(y-arr[x-1]);
if(c>mini){
    mini=c;
}
cout<<fixed<<setprecision(10)<<mini<<endl;
}
