#include<bits/stdc++.h>
using namespace std;
int x,y,a,b,n[201];
vector<int> v[201];
int tot(int pos,int c){
    if(!n[pos])n[pos]=c;
    else{
        if(n[pos]!=c)return 1;
        else return 0;
    }
    int ans=0,st;
    st=c-1;
    st^=1;
    st++;
    for(int i=0;i<v[pos].size();i++){
        ans=max(ans,tot(v[pos][i],st));
    }
    return ans;
}
int main(){
    while(1){
    cin>>x;
    if(!x)break;
    cin>>y;
    for(int i=0;i<x;i++){
        n[i]=0;
        v[i].clear();
    }
    for(int i=0;i<y;i++){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    if(tot(0,1))cout<<"NOT BICOLORABLE."<<endl;
    else cout<<"BICOLORABLE."<<endl;
    }
}
