#include<bits/stdc++.h>
using namespace std;
int x,y,arr[31][11],f,ind[31],cnt,fl,ans,anss[31][31],vans,dp[31],indx;
vector<int> v[31];
int main(){
    while(scanf("%d%d",&x,&y)){
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            scanf("%d",&arr[i][j]);
        }
        sort(arr[i],arr[i]+y);
        ind[i]=i+1;
    }
    for(int i=x-1;i>=0;i--){
        f=i;
        for(int j=0;j<=i;j++){
            for(int k=0;k<y;k++){
                if(arr[j][k]>arr[f][k]){
                    f=j;
                    break;
                }
                else if(arr[j][k]<arr[f][k])break;
            }
        }
        if(f!=i){
        for(int k=0;k<y;k++){
            swap(arr[f][k],arr[i][k]);
        }
        swap(ind[f],ind[i]);
        }
    }
    for(int i=0;i<x;i++){
        dp[i]=1;
        v[i].clear();
        v[i].push_back(ind[i]);
    }
    ans=0;
    for(int i=0;i<x;i++){
        for(int j=i-1;j>=0;j--){
                fl=1;
            for(int k=0;k<y;k++){
                if(arr[i][k]<=arr[j][k]){
                    fl=0;
                    break;
                }
            }
            if(fl){
                if(dp[i]<dp[j]+1){
                    dp[i]=dp[j]+1;
                    v[i]=v[j];
                    v[i].push_back(ind[i]);
                }
            }
        }
        if(dp[i]>ans){
            ans=dp[i];
            indx=i;
        }
    }
    printf("%d\n",ans);
    for(int i=0;i<ans;i++)printf("%d ",v[indx][i]);
    printf("\n");
    }
}
