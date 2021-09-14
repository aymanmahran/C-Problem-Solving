#include<bits/stdc++.h>
using namespace std;
int x,y,st[10][10][10][10],v[10][10][10][10],ch[10][10][10][10],z,n,m;
stringstream c;
char fa,fb,fc,fd,sa,sb,sc,sd,a,b,f,e;
string d,g,ss,ff;
void bfs(int fa,fb,fc,fd){
   queue<string> q;
   q.push(s);
   st[fa][fb][fc][fd]=0;
   v[fa][fb][fc][fd]=1;
   while(!q.empty()){
        z=q.front();
        q.pop();
        c<<z;
        c>>d;
        c.clear();
        g=d;
        for(int i=0;i<4;i++){
            for(int j=9;j<=9;j++){
                //if(!i&&!j)continue;
                d=g;
                d[i]=(char)(j+48);
                c<<d;
                c>>y;
                c.clear();
                if(!ch[y]&&!v[y]){
                    int za=min(abs(j-(g[i]-48)),9-(g[i]-48)+j+1);
                    //if(j==0&&g[i]=='9')za=0;
                    st[y]=st[z]+za;
                    v[y]=1;
                    q.push(make_pair(make_pair(),make_pair()));
                }
            }
        }
   }
   return;
}

void tot(int ss){
    string ee;
    c<<ss;
    c>>ee;
    c.clear();
    int p=0;
    for(int i=0;i<4;i++){
        p=min(ee[i]+1,ee[i]-1);
    }
    return ;
}
int main(){
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>fa>>fb>>fc>>fd;
        //ff=((a*10+b)*10+f)*10+e;
        ff=fa+fb+fc+fd;
        cin>>sa>>sb>>fc>>fd;
        //ss=((a*10+b)*10+f)*10+e;
        ss=sa+sb+sc+sd;
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>a>>b>>f>>e;
            //m=((a*10+b)*10+f)*10+e;
            //arr[j]=m;
            ch[]=1;
        }
        //if(ss==ff)cout<<"0"<<endl;
        //if(ss<ff)swap(ss,ff);
        bfs(fa,fb,fc,fd);
        if(!st[sa][sb][sc][sd])cout<<"-1"<<endl;
        else cout<<st[sa][sb][sc][sd]<<endl;
        //for(int k=0;k<n;k++)ch[arr[k]]=0;
        //for(int k=0;k<10000;k++)st[k]=0,v[k]=0,ch[k]=0;
    }
}
