#include<bits/stdc++.h>
using namespace std;
int x,y,arr[200001],arr2[200001],no[27][2000],ans[27][2000],z;
char c;
string s;
int main(){
    cin>>x>>s>>y;
    for(int i=0;i<y;i++)scanf("%d %c",&arr[i],&c),arr2[i]=(int)c-97;
    for(int i=0;i<x;i++){
        no[s[i]-97][i]=1;
        for(int j=0;j<26;j++)no[j][i]+=no[j][i-1];
    }
    for(int i=0;i<26;i++){
        for(int j=0;j<x;j++){
            for(int l=j;l<x;l++){
                z=(l-j+1)-(no[i][l]-no[i][j-1]);
                ans[i][z]=max(ans[i][z],l-j+1);
            }
        }
    }
    for(int i=0;i<26;i++){
        for(int j=1;j<=x;j++)ans[i][j]=max(ans[i][j],ans[i][j-1]);
    }
    for(int i=0;i<y;i++)printf("%d\n",ans[arr2[i]][arr[i]]);
}
