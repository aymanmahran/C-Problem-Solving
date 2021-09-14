#include<bits/stdc++.h>
using namespace std;
long long x,y,dp[2001][2001],ans;
vector<int>d[2001];
int main(){
    cin>>x>>y;
    for(int i=1;i<=x;i++){
        for(int j=i;j<=x;j+=i)d[j].push_back(i);
    }
    for(int i=1;i<=x;i++)dp[i][1]=1;
    for(int i=2;i<=y;i++){
        for(int j=1;j<=x;j++){
            //dp[j][i]=dp[j-1][i];
            for(int l=0;l<d[j].size();l++)
                dp[j][i]=(dp[j][i]+dp[d[j][l]][i-1])%1000000007;
        }
    }
    for(int i=1;i<=x;i++)ans=(ans+dp[i][y])%1000000007;
    cout<<ans<<endl;
}
