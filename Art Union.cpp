#include<bits/stdc++.h>
using namespace std;
int x,y,arr[50000][5];
int main(){
cin>>x>>y;
for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
        cin>>arr[i][j];
    }
}
for(int i=1;i<y;i++){
    arr[0][i]=arr[0][i]+arr[0][i-1];
}
for(int i=1;i<x;i++){
    arr[i][0]=arr[i][0]+arr[i-1][0];
}
for(int i=1;i<y;i++){
    for(int j=1;j<x;j++){
        arr[j][i]=arr[j][i]+max(arr[j-1][i],arr[j][i-1]);
    }
}
for(int i=0;i<x;i++){
    cout<<arr[i][y-1]<<" ";
}
cout<<endl;
}
