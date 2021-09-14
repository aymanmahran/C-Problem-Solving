#include<bits/stdc++.h>
using namespace std;
int x,z,a,b,s[50],e[50],ss[50],ee[50],ans[1001][50],ans2[1001][50],cnt;
bool f;
int main(){
cin>>z>>x>>a>>b;
for(int i=0;i<z;i++){
    cin>>s[i]>>e[i];
}
for(int i=0;i<x;i++){
    cin>>ss[i]>>ee[i];
}
for(int i=a;i<=b;i++){
    for(int j=0;j<x;j++){
        ans[i][j]=ss[j]+i;
        ans2[i][j]=ee[j]+i;
    }
}
for(int i=a;i<=b;i++){
    for(int j=0;j<x;j++){
        for(int k=0;k<z;k++){
            if(ans[i][j]>=s[k]&&ans2[i][j]<=e[k]){
                cnt++;
                f=true;
                break;
            }
            else if(ans[i][j]<=s[k]&&ans2[i][j]>=s[k]){
                cnt++;
                f=true;
                break;
            }
            else if(ans[i][j]<=e[k]&&ans2[i][j]>=e[k]){
                cnt++;
                f=true;
                break;
            }
        }
        if(f)break;
    }
    f=false;
}
cout<<cnt<<endl;
}
