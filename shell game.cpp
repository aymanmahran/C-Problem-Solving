#include<bits/stdc++.h>
using namespace std;
int x,arr[3][2],ans[3];
int main(){
cin>>x;
ans[x-1]=1;
for(int i=0;i<3;i++){
    cin>>arr[i][0]>>arr[i][1];
}
for(int i=0;i<3;i++){
    swap(ans[arr[i][0]-1],ans[arr[i][1]-1]);
}
for(int i=0;i<3;i++){
    if(ans[i]==1){
        cout<<i+1<<endl;
        break;
    }
}
}
