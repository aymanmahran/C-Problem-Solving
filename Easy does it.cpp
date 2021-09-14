#include<bits/stdc++.h>
using namespace std;
int x,y,cnt,n,dis[301];
string s,d,c,z[301],h,b,a;
map<string,int> m;
vector<int> v[301];
bool flag,vis[301];
int tot(int s,int e){
    queue<int> q;
    q.push(s);
    vis[s]=1;
    int st;
    dis[s]=0;
    while(!q.empty()){
        st=q.front();
        q.pop();
        if(st==e)return dis[st];
        for(int i=0;i<v[st].size();i++){
            //if(v[st][i]==e)return dis[st];
            if(!vis[v[st][i]]){
                dis[v[st][i]]=min(dis[v[st][i]],dis[st]+1);
                q.push(v[st][i]);
                vis[v[st][i]]=1;
            }
        }
    }
}
int main(){
    while(1){
    //cin>>x;
    scanf("%d",&x);
    if(!x)break;
    for(int i=1;i<=300;i++)v[i].clear(),vis[i]=0,dis[i]=1e9;
    for(int i=0;i<x;i++){
        cin>>c;
        m[c]=i+1;
    }
    //cin>>y;
    scanf("%d",&y);
    for(int i=0;i<y;i++){
        cin>>s;
        getline(cin,d);
        //cout<<d<<endl;
        h="";
        flag=false;
        d+=" ";
        cnt=0;
        for(int j=1;j<d.size();j++){
            if(d[j]==' '){
                flag^=1;
                if(flag){
                   z[cnt]=h;
                   cnt++;
                }
                h="";
            }
            else h+=d[j];
        }
        for(int j=0;j<cnt;j++){
            for(int k=0;k<cnt;k++){
                if(j!=k)v[m[z[j]]].push_back(m[z[k]]);
                //if(j!=k)v[m[z[j]]].push_back(z[k]);
            }
        }
    }
    //for(int k=0;k<v[3].size();k++)cout<<v[3][k]<<endl;
    //cin>>n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        cin>>a>>b;
        //cout<<tot(m[a],m[b])-1<<endl;
        for(int j=0;j<201;j++)vis[j]=0,dis[j]=1e9;
        printf("Number of roads needed from %s to %s is %d.\n",a.c_str(),b.c_str(),tot(m[a],m[b]));
    }
}
}
/*
5
Adelaide
Melbourne
Sydney
WestSydney
Brisbane
4
OR Adelaide 300 Melbourne
HH Melbourne 850 WestSydney 105 Sydney
M7 WestSydney 1130 Brisbane
BushTrack Adelaide 2448 Brisbane
1
Melbourne Sydney
*/
