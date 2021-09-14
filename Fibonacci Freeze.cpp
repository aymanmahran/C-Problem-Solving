#include<bits/stdc++.h>
using namespace std;
long long arr[5001],x;
int main(){
arr[0]=0;
arr[1]=1;
for(int i=2;i<=5000;i++){
    arr[i]=arr[i-1]+arr[i-2];
}
while(cin>>x){
cout<<"The Fibonacci number for "<<x<<" is "<<arr[x]<<endl;
}
}
