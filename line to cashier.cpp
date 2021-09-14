#include<bits/stdc++.h>
using namespace std;
int a,arr[100],r,num[100];
int main(){
cin>>a;
for(int i=0;i<a;i++){
    cin>>arr[i];
}
for(int v=0;v<a;v++){
for(int i=0;i<arr[v];i++){
    cin>>r;
    num[v]+=(r*5);
    if(i==arr[v]-1){
        num[v]+=(arr[v]*15);
    }
    r=0;
}
}
sort(num,num+a);
cout<<num[0]<<endl;
}
