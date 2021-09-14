#include<bits/stdc++.h>
using namespace std;
int x,y,z;
long long arr[101][2];
int  main(){
cin>>x>>y>>z;
arr[0][0]=1;
for(int i=1;i<=x;i++){
    for(int j=1;j<=min(i,y);j++){
        if(j<z){
        arr[i][0]=(arr[i][0]+arr[i-j][0])%1000000007;
        arr[i][1]=(arr[i][1]+arr[i-j][1])%1000000007;
        }
        else{
        arr[i][1]=(arr[i][1]+arr[i-j][0])%1000000007;
        arr[i][1]=(arr[i][1]+arr[i-j][1])%1000000007;
        }
    }
}
cout<<arr[x][1]<<endl;
}
