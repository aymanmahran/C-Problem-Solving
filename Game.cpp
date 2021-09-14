#include<bits/stdc++.h>
using namespace std;
int x,arr[201],n[201],p[201][201],ch[201],w,ind,ranks[201],jj,ans=1e9;
pair<int,int> o[201];
bool flag;
int findrank(int s){
    if(ranks[s])return ranks[s];
    if(n[s]==0)return 0;
    int r=0;
    for(int i=0;i<n[s];i++){
        r=max(r,findrank(p[s][i])+1);
    }
    ranks[s]=r;
    return r;
}
int tryy(int g){
    int cnt=0;
    for(int i=0;i<x;i++)ch[i]=0;
    for(int i=g;i<=2*x;i++){
        w=0;
        ind=(i%3)+1;
        for(int j=0;j<x;j++){
            flag=false;
            jj=o[j].second;
            for(int k=0;k<n[jj];k++){
                if(!ch[p[jj][k]]){
                    flag=true;
                    break;
                }
            }
            if(!flag&&!ch[jj]&&arr[jj]==ind){
                ch[jj]=1;
                cnt++;
            }
        }
        for(int k=0;k<x;k++){
            if(!ch[k]){
                w++;
            }
            //cout<<ch[k]<<" ";
        }
        //cout<<endl;
        if(!w)break;
        cnt++;
    }
    return cnt;
}
int main(){
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    for(int i=0;i<x;i++){
        cin>>n[i];
        for(int j=0;j<n[i];j++){
            cin>>p[i][j];
            p[i][j]--;
        }
    }
    for(int i=0;i<x;i++){
        ranks[i]=findrank(i);
        o[i]=make_pair(ranks[i],i);
    }
    sort(o,o+x);
    for(int i=0;i<3;i++){
        ans=min(ans,tryy(i));
    }
    cout<<ans<<endl;
}
