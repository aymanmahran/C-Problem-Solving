#include<bits/stdc++.h>
using namespace std;
long long x,arr[100001],dp[100001][2],ans;
string s[100001][2];
int main(){
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    for(int i=0;i<x;i++){
        cin>>s[i][0];
        s[i][1]=s[i][0];
        reverse(s[i][1].begin(),s[i][1].end());
    }
    dp[0][0]=0;
    dp[0][1]=arr[0];
    for(int i=1;i<x;i++){
        dp[i][0]=1e15;
        dp[i][1]=1e15;
        if(s[i][0]>=s[i-1][0])dp[i][0]=min(dp[i][0],dp[i-1][0]);
        if(s[i][0]>=s[i-1][1])dp[i][0]=min(dp[i][0],dp[i-1][1]);
        if(s[i][1]>=s[i-1][0])dp[i][1]=min(dp[i][1],dp[i-1][0]+arr[i]);
        if(s[i][1]>=s[i-1][1])dp[i][1]=min(dp[i][1],dp[i-1][1]+arr[i]);
    }
    ans=min(dp[x-1][0],dp[x-1][1]);
    if(ans==1e15)ans=-1;
    cout<<ans<<endl;
}
