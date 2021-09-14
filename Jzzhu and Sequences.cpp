#include<bits/stdc++.h>
using namespace std;
int64_t x,n,arr[6];
int main(){
cin>>arr[0]>>arr[1]>>n;
arr[2]=arr[1]-arr[0];
arr[3]=arr[0]*-1;
arr[4]=arr[1]*-1;
arr[5]=arr[2]*-1;
x=(n%6+6)%6;
if(x==0)x=6;


cout<<(arr[x-1]%1000000007+1000000007)%1000000007<<endl;
}
