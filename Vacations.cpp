#include<bits/stdc++.h>
using namespace std;
int x,arr[101],dp[101][3];
int tot(int pos,int a){
    if(pos==x)return 0;
    if(dp[pos][a]!=-1)return dp[pos][a];
    if(arr[pos]==1||arr[pos]==2){
        if(a!=arr[pos])dp[pos][a]=min(tot(pos+1,arr[pos]),tot(pos+1,0)+1);
        else dp[pos][a]=tot(pos+1,0)+1;
    }
    else if(arr[pos]==0){
        dp[pos][a]=tot(pos+1,0)+1;
    }
    else{
        int f=1e9,s=1e9;
        if(a!=2)s=tot(pos+1,2);
        if(a!=1)f=tot(pos+1,1);
        dp[pos][a]=min(min(f,s),tot(pos+1,0)+1);
    }
    return dp[pos][a];
}
int main(){
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<3;j++){
            dp[i][j]=-1;
        }
    }
    cout<<tot(0,0)<<endl;
}
