#include<bits/stdc++.h>
using namespace std;
int x,y,arr[100][100];
int main(){
cin>>x>>y;
for(int i=0;i<x;i++){
    arr[i][i]=y;
}
for(int i=0;i<x;i++){
    for(int j=0;j<x;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
}
