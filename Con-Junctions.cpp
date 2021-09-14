#include<bits/stdc++.h>
using namespace std;
int x,a[100001],b[100001],dp[100001][2],ans1,ans2,cnt;
vector<int> e[100001];
int tot(int pos,int st,int pr){
    if(dp[pos][st])return dp[pos][st];
    if(st){
        int s=0,d=0;
    for(int i=0;i<e[pos].size();i++){
        if(e[pos][i]!=pr)s+=tot(e[pos][i],0,pos);
      }
    for(int i=0;i<e[pos].size();i++){
        if(e[pos][i]!=pr)d+=tot(e[pos][i],1,pos);
      }
      dp[pos][st]=min(s,d+1);
      return dp[pos][st];
    }
    else{
        dp[pos][st]=1;
    for(int i=0;i<e[pos].size();i++){
        if(e[pos][i]!=pr)dp[pos][st]+=tot(e[pos][i],1,pos);
    }
    return dp[pos][st];
    }
}
int pot(int pos,int s){
    int p=0;
    p=pot(pos+1,s+e[pos].size()-1)+pot(pos+1)
}
int main(){
    cin>>x;
    for(int i=0;i<x-1;i++){
        cin>>a[i]>>b[i];
        e[a[i]-1].push_back(b[i]-1);
        e[b[i]-1].push_back(a[i]-1);
    }
    for(int i=0;i<e[0].size();i++){
        ans1+=tot(e[0][i],1,0);
    }
    for(int i=0;i<e[0].size();i++){
        ans2+=tot(e[0][i],0,0);
    }
    cout<<min(ans1+1,ans2)<<endl;
    ans1=min(ans1,ans2);

    cout<<cnt<<endl;
}
