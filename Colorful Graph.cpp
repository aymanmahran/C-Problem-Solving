#include<bits/stdc++.h>
using namespace std;
int x,y,a,b,arr[100001],ch[100001],cnt,ans=100002,bst,w[100001];
vector<int> n[100001];
int main(){
    scanf("%d%d",&x,&y);
    for(int i=1;i<=x;i++){
        scanf("%d",&arr[i]);
        w[arr[i]]=1;
    }
    for(int i=0;i<y;i++){
        scanf("%d%d",&a,&b);
        n[arr[a]].push_back(arr[b]);
        n[arr[b]].push_back(arr[a]);
    }
    for(int i=1;i<=100000;i++){
        cnt=0;
        if(!w[i])continue;
        for(int j=0;j<n[i].size();j++){
            if(ch[n[i][j]]!=i&&n[i][j]!=i){
                cnt++;
                ch[n[i][j]]=i;
            }
        }
        if(cnt>bst){
            bst=cnt;
            ans=i;
        }
        else if(cnt==bst){
            ans=min(ans,i);
        }
    }
    cout<<ans<<endl;
}
