#include<bits/stdc++.h>
using namespace std;
int t,x,y,ans,v[1001][1001];
char c[1002][1002];
int tot(int i,int j,int cnt){
    if(v[i][j])return cnt-1;
    if(c[i][j]=='#'||i==x||j==y||i<0||j<0)return cnt-1;
    v[i][j]=1;
    return max(max(tot(i,j+1,cnt+1),tot(i+1,j,cnt+1)),max(tot(i,j-1,cnt+1),tot(i-1,j,cnt+1)));
}
int main(){
    scanf("%d",&t);
    for(int f=0;f<t;f++){
        scanf("%d%d",&x,&y);
        swap(x,y);
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                scanf(" %c",&c[i][j]);
                v[i][j]=0;
            }
        }
        ans=1e9;
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                if(c[i][j]=='.'&&!v[i][j]){
                    ans=min(ans,tot(i,j,0));
                }
            }
        }
        if(ans==1e9)ans=0;
        printf("Maximum rope length is %d.\n",ans);
    }
}
