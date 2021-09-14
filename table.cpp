#include<bits/stdc++.h>
using namespace std;
int arr[50][50],x,y,cnt;
int main(){
cin>>x>>y;
for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
        cin>>arr[i][j];
        if(arr[i][j]==1){
            if((i==0)||(i==x-1)||(j==0)||(j==y-1))
            cnt++;
        }
    }
}
if(cnt>0){
    cout<<"2"<<endl;
}
else if(cnt==0){
    cout<<"4"<<endl;
}
}
