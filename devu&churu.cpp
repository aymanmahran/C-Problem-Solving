#include<bits/stdc++.h>
using namespace std;
int main(){
int x,y,sum=0;
cin>>x>>y;
x=static_cast<const int>(x);
int arr[x];
for(int i=0;i<x;i++){
    cin>>arr[i];
    sum+=arr[i];
}
int time=sum+(10*(x-1));
if(y<time){
    cout<<"-1"<<endl;
}
else{
    int rem=y-time;
    int joke=(10*(x-1))/5;
    rem/=5;
    joke+=rem;
    cout<<joke<<endl;
}
}
