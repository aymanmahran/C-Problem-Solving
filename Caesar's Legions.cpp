#include<bits/stdc++.h>
using namespace std;
int x,y,a,b,dp[101][101][11][11][2];
long long tot(int rx,int ry,int ra,int rb,int st){
    if(ra<0||rb<0)return 0;
    if(rx==0&&ry==0)return 1;
    if(rx<0||ry<0)return 0;
    if(dp[rx][ry][ra][rb][st]!=-1){return dp[rx][ry][ra][rb][st];}
    //cout<<min(rx,a)<<" "<<min(ry,b)<<" "<<ra<<" "<<rb<<" "<<st<<endl;
    long long ans;
    if(st==0)ans=tot(rx-1,ry,ra-1,b,0)+tot(rx,ry-1,a,b-1,1);
    else if(st==1)ans=tot(rx-1,ry,a-1,b,0)+tot(rx,ry-1,a,rb-1,1);
    else ans=tot(rx-1,ry,a-1,b,0)+tot(rx,ry-1,a,b-1,1);
    ans%=100000000;
    dp[rx][ry][ra][rb][st]=ans;
    return ans;
}
int main(){
    cin>>x>>y>>a>>b;
    for(int i=0;i<101;i++){
        for(int j=0;j<101;j++){
            for(int k=0;k<11;k++){
                for(int l=0;l<11;l++){
                    dp[i][j][k][l][0]=-1;
                    dp[i][j][k][l][1]=-1;
                }
            }
        }
    }
    cout<<tot(x,y,a,b,-1)<<endl;
}
