#include<bits/stdc++.h>
using namespace std;
int x,arr[101];
long double sum,a,b;
const long double pi=3.141592653589793238462643383279502884197169399375105820974944592307816406286;
int main(){
cin>>x;
for(int i=0;i<x;i++){
    cin>>arr[i];
}
sort(arr,arr+(x+1),greater<int>());
for(int i=0;i<x;i+=2){
    a=pi*(arr[i]*arr[i]);
    b=pi*(arr[i+1]*arr[i+1]);
    a-=b;
    sum+=a;
}
cout<<setprecision(11)<<sum<<endl;
}
