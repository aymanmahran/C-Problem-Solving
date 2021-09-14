#include<bits/stdc++.h>
using namespace std;
int main(){
int x,even=0,odd=0;
cin>>x;
x=static_cast<const int>(x);
int arr[x],place[x],place2[x];
for(int i=0;i<x;i++){
    cin>>arr[i];
    if(arr[i]%2==0){
        place[even]=i;
        even++;
    }
    if(arr[i]%2!=0){
            place2[odd]=i;
        odd++;
    }
}
if(even==1){
    cout<<place[0]+1<<endl;
}
if(odd==1){
    cout<<place2[0]+1<<endl;
}
}
