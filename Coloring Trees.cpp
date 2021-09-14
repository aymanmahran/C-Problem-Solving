#include<bits/stdc++.h>
using namespace std;
long long x,y,z,arr[101],co[101][101],dp[101][101][101],ans;
long long tot(int pos,int c,int n){
    if(n>z)return 1e15;
    if(pos==x){
        if(n==z)return 0;
        else return 1e15;
    }
    if(dp[pos][c][n])return dp[pos][c][n];
    int m=0;
    if(arr[pos]){
        if(arr[pos]!=c)m=1;
        dp[pos][c][n]=tot(pos+1,arr[pos],n+m);
    }
    else{
        long long d=1e15;
        for(int i=1;i<=y;i++){
            if(i!=c)m=1;
            else m=0;
            d=min(d,tot(pos+1,i,n+m)+co[pos][i-1]);
        }
        dp[pos][c][n]=d;
    }
    return dp[pos][c][n];
}
int main(){
    cin>>x>>y>>z;
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>co[i][j];
        }
    }
    ans=tot(0,0,0);
    if(ans==1e15)cout<<"-1"<<endl;
    else cout<<ans<<endl;
}
