#include<bits/stdc++.h>
using namespace std;
int x,vis[700],cnt=1,arr[91][91];
string s,d,a,b;
vector<int> v[700];
string dis[700],ch[9101],fn;
bool flag;
void bfs(string s,string d){
    queue<int> q;
    q.push(arr[s[0]][s[1]]);
    vis[arr[s[0]][s[1]]]=1;
    int f;
    dis[arr[s[0]][s[1]]]=s;
    while(!q.empty()){
        f=q.front();
        q.pop();
        if(f==arr[d[0]][d[1]]){
            int h=dis[f].size();
            cout<<dis[f][0]<<dis[f][1]<<" ";
            for(int i=3;i<dis[f].size()-3;i+=3){
                cout<<dis[f][i]<<dis[f][i+1]<<endl<<dis[f][i]<<dis[f][i+1]<<" ";
            }
            cout<<dis[f][h-2]<<dis[f][h-1]<<endl<<endl;
            flag=true;
            return;
        }
        for(int i=0;i<v[f].size();i++){
            if(!vis[v[f][i]]){
                fn=ch[v[f][i]];
                dis[v[f][i]]=dis[f]+" "+fn;
                vis[v[f][i]]=1;
                q.push(v[f][i]);
            }
        }
    }
    return;
}
int main(){
    for(int i=65;i<=90;i++){
        for(int j=65;j<=90;j++){
            arr[i][j]=cnt;
            ch[cnt]=(char)i;
            ch[cnt]+=(char)j;
            //cout<<ch[cnt]<<endl;
            cnt++;
        }
    }
    while(cin>>x){
            flag=false;
    for(int i=0;i<x;i++){
        cin>>a>>b;
        v[arr[a[0]][a[1]]].push_back(arr[b[0]][b[1]]);
        v[arr[b[0]][b[1]]].push_back(arr[a[0]][a[1]]);
    }
    cin>>s>>d;
    bfs(s,d);
    if(!flag)cout<<"No route"<<endl<<endl;
    for(int i=0;i<700;i++){
        vis[i]=0;
        v[i].clear();
        dis[i]="";
    }
}
}
