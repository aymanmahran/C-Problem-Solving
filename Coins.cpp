#include<bits/stdc++.h>
using namespace std;
int x,arr[100000],cnt=1;
bool flag;
int main(){
cin>>x;
arr[0]=x;
for(int i=(x/2);i>=1;i--){
        flag=true;
    for(int j=0;j<cnt;j++){
        if(arr[j]%i!=0){
            flag=false;
            break;
        }
    }
    if(flag){
        arr[cnt]=i;
        cnt++;
    }
}
for(int i=0;i<cnt;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
