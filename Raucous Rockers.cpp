/*
ID: aymang.2
PROG: rockers
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;
int x,a,b,arr[21],dp[21][21][21];
int tot(int pos,int n,int m){
    if(n>a||m==b)return -1e9;
    if(pos==x)return 0;
    int p=0;
    if(dp[pos][n][m])return dp[pos][n][m];
    p=max(max(tot(pos+1,n+arr[pos],m)+1,tot(pos+1,arr[pos],m+1)+1),max(tot(pos+1,n,m),tot(pos+1,0,m+1)));
    dp[pos][n][m]=p;
    return p;
}
int main(){
    freopen("rockers.in","r",stdin);
    freopen("rockers.out","w",stdout);
    cin>>x>>a>>b;
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    cout<<tot(0,0,0)<<endl;
}
