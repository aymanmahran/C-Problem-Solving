#include<bits/stdc++.h>
using namespace std;
int main(){
int x,arr[123]={0},cnt=0,k=0;
cin>>x;
int q;
string s[x],y[2];
int arr2[x],arr3[x];
for(int i=0;i<x;i++){
    cin>>s[i];
}
q=static_cast<int>(s[0][0]);
for(int i=0,j=x-1;i<x;i++,j--){
        arr2[i]=static_cast<int>(s[i][i]);
        arr3[i]=static_cast<int>(s[i][j]);
}
for(int i=0;i<x;i++){
        for(int v=0;v<x;v++){
            int z=static_cast<int>(s[i][v]);
            arr[z]++;
        }
}
for(int i=97;i<123;i++){
    if(arr[i]!=0){
        cnt++;
    }
}
if(cnt==2){
    sort(arr2,arr2+x);
    sort(arr3,arr3+x);
    if(arr2[0]==arr3[0]&&arr2[x-1]==arr3[x-1]&&arr2[0]==arr2[x-1]&&arr3[0]==arr3[x-1]&&arr[q]==((x*2)-1)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
else{
    cout<<"NO"<<endl;
}
}
